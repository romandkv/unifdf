/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 20:19:58 by pshock            #+#    #+#             */
/*   Updated: 2019/12/21 23:06:08 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static t_point	rotate(t_point *t, t_mlx *w)
{
	t_point	new;
	float	cc;
	float	ss;
	float	temp;

	new.color = t->color;
	cc = cosf(w->cam.anglex / 180.0f * 3.14159f);
	ss = sinf(w->cam.anglex / 180.0f * 3.14159f);
	new.y = (float)cc * t->y + ss * t->z * w->cam.zk;
	new.z = (float)cc * t->z * w->cam.zk - ss * t->y;
	new.x = t->x;
	cc = cosf(w->cam.angley / 180.0f * 3.14159f);
	ss = sinf(w->cam.angley / 180.0f * 3.14159f);
	temp = new.x;
	new.x = (float)cc * new.x - ss * new.z;
	new.z = (float)cc * new.z + ss * temp;
	cc = cosf(w->cam.anglez / 180.0f * 3.14159f);
	ss = sinf(w->cam.anglez / 180.0f * 3.14159f);
	temp = new.x;
	new.x = (float)cc * new.x + ss * new.y;
	new.y = (float)cc * new.y - ss * temp;
	return (new);
}

t_point			*rotate_all(t_mlx *w)
{
	t_point	*new;
	int		i;
	int		size;

	colorfix(&w->points, w);
	size = w->xsize * w->ysize;
	new = (t_point *)malloc(size * sizeof(t_point));
	i = 0;
	while (i < size)
	{
		new[i] = rotate(&w->points[i], w);
		i++;
	}
	return (new);
}
