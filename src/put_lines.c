/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_lines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 22:36:46 by pshock            #+#    #+#             */
/*   Updated: 2019/12/22 15:01:33 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	put_line(t_point *t, t_mlx *w)
{
	int	i;
	int	size;

	i = 0;
	size = w->xsize * w->ysize;
	while (i < size)
	{
		if (i % w->xsize == w->xsize - 1)
			i++;
		else
		{
			bresenham_line(t[i], t[i + 1], w);
			i++;
		}
	}
	i = 0;
	while (i < size)
	{
		if (i + w->xsize == size)
			break ;
		bresenham_line(t[i], t[i + w->xsize], w);
		i++;
	}
	free(t);
}
