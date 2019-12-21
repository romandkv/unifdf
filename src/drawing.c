/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 20:23:29 by pshock            #+#    #+#             */
/*   Updated: 2019/12/21 20:27:14 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"
#include "../includes/color.h"

static void	put_pixel(int x, int y, int color, t_mlx *w)
{
	int i;

	if (!(x < MENU + 1 || y < 0 || x >= WIDTH || y >= HEIGHT))
	{
		i = (x * w->image.bpp / 8) + (y * w->image.size_line);
		w->image.data[i] = color;
		w->image.data[++i] = color >> 8;
		w->image.data[++i] = color >> 16;
		w->image.data[++i] = 0;
	}
}

void		bresenham_line(t_point begin, t_point end, t_mlx *w)
{
	int				s[2];
	int				error[2];
	int				x;
	int				y;

	s[0] = (int)begin.x < (int)end.x ? 1 : -1;
	s[1] = (int)begin.y < (int)end.y ? 1 : -1;
	x = (int)begin.x;
	y = (int)begin.y;
	error[0] = abs((int)end.x - (int)begin.x) - abs((int)end.y - (int)begin.y);
	while ((x - s[0]) != (int)end.x && (y - s[1]) != (int)end.y)
	{
		put_pixel(x, y, get_color(x, y, begin, end), w);
		error[1] = 2 * error[0];
		error[0] += (error[1] >= -abs((int)end.y - (int)begin.y)) ?
			-abs((int)end.y - (int)begin.y) : 0;
		x += (error[1] >= -abs((int)end.y - (int)begin.y)) ? s[0] : 0;
		error[0] += (error[1] <= abs((int)end.x - (int)begin.x)) ?
			abs((int)end.x - (int)begin.x) : 0;
		y += (error[1] <= abs((int)end.x - (int)begin.x)) ? s[1] : 0;
	}
}

void		draw_menu(t_mlx *w)
{
	mlx_string_put(w->mlx, w->win, 15, 10, GRAY, "Keyboard control");
	mlx_string_put(w->mlx, w->win, 15, 35, GRAY, "Rotation: ");
	mlx_string_put(w->mlx, w->win, 15, 60, GRAY, "4/6 X 2/8 Y");
	mlx_string_put(w->mlx, w->win, 15, 85, GRAY, "Move:");
	mlx_string_put(w->mlx, w->win, 15, 110, GRAY, "Up/Down Left/Right");
	mlx_string_put(w->mlx, w->win, 15, 135, GRAY, "Zoomin: Z");
	mlx_string_put(w->mlx, w->win, 15, 160, GRAY, "Zoomout: X");
	mlx_string_put(w->mlx, w->win, 15, 185, GRAY, "Altitude Q/W");
	mlx_string_put(w->mlx, w->win, 15, 210, GRAY, "Color: 1 2 3 4");
}
