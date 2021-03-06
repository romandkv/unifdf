/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 21:08:58 by pshock            #+#    #+#             */
/*   Updated: 2019/12/21 21:17:09 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	set_xy(t_mlx *w, int x, int y)
{
	w->mouse.oldx = x;
	w->mouse.oldy = y;
}

int		mouse_press(int button, int x, int y, void *param)
{
	t_mlx *w;

	w = (t_mlx *)param;
	if (button == 1)
	{
		set_xy(w, x, y);
		w->mouse.left_click = 1;
	}
	if (button == 2)
	{
		set_xy(w, x, y);
		w->mouse.right_click = 1;
	}
	if (button == 3)
	{
		set_xy(w, x, y);
		w->mouse.wheel_click = 1;
	}
	if (button == 4)
		w->cam.scale -= 0.0005;
	if (button == 5)
		w->cam.scale += 0.0005;
	action(w);
	return (0);
}

int		mouse_release(int button, int x, int y, void *param)
{
	t_mlx *w;

	(void)x;
	(void)y;
	w = (t_mlx *)param;
	if (button == 1)
		w->mouse.left_click = 0;
	if (button == 2)
		w->mouse.right_click = 0;
	if (button == 3)
		w->mouse.wheel_click = 0;
	return (0);
}

int		mouse_move(int x, int y, void *param)
{
	t_mlx *w;

	w = (t_mlx *)param;
	if (w->mouse.left_click)
	{
		w->cam.x_pro += (x - w->mouse.oldx);
		w->cam.y_pro += (y - w->mouse.oldy);
		set_xy(w, x, y);
	}
	if (w->mouse.wheel_click)
	{
		if (w->cam.zk + (-y + w->mouse.oldy) * 0.001 >= 0.0f)
			w->cam.zk += (-y + w->mouse.oldy) * 0.001;
		set_xy(w, x, y);
	}
	if (w->mouse.right_click)
	{
		w->cam.anglex += (-y + w->mouse.oldy) * 0.1;
		w->cam.angley += (x - w->mouse.oldx) * 0.1;
		set_xy(w, x, y);
	}
	action(w);
	return (0);
}
