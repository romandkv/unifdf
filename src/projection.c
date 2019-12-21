/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 22:33:34 by pshock            #+#    #+#             */
/*   Updated: 2019/12/21 22:36:31 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static void	project(t_point *t, t_mlx *w)
{
	t->z += 10;
	t->x = (float)w->cam.aspect_ratio * w->cam.tang * t->x;
	t->y = (float)w->cam.tang * t->y;
	t->x *= w->cam.scale * WIDTH;
	t->y *= w->cam.scale * HEIGHT;
	t->x += w->cam.x_pro;
	t->y += w->cam.y_pro;
}

void		project_all(t_point *t, t_mlx *w)
{
	int i;
	int size;

	size = w->xsize * w->ysize;
	i = 0;
	while (i < size)
	{
		project(&t[i], w);
		i++;
	}
}
