#include "fdf.h"

void	put_line(t_wind *win, t_point *start, t_point *finish)
{
	int 		deltaX = start->x - finish->x;
	int 		deltaY = start->y - finish->y;
	deltaX = abs(deltaX);
	deltaY = abs(deltaY);
	const int 	signX = start->x < finish->x ? 1 : -1;
	const int 	signY = start->y < finish->y ? 1 : -1;
	double		error = (deltaX > deltaY ? deltaX : deltaY) / 2;
	int		err;
	int 		x = start->x;
	int		y = start->y;

	printf("---%d---%d", deltaX, deltaY);
	while (x <= finish->x && y <= finish->y)
	{
		mlx_pixel_put(win->mlx_ptr, win->mlx_win, x, y, 0xFBEEE6);
		err = error;
		if (err > -deltaX)
		{
			error -= deltaY;
			x += signX;
		}
		if (err < deltaY)
		{
			error += deltaX;
			y += signY;
		}
	}
}

void	put_triangle(t_wind *win, t_triangle *tr)
{
	put_line(win, &(tr->tr)[0], &(tr->tr)[1]);
	put_line(win, &(tr->tr)[1], &(tr->tr)[2]);
	put_line(win, &(tr->tr)[2], &(tr->tr)[0]);
}
