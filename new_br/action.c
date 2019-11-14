#include "fdf.h"

void	set_back(t_mlx *w)
{
	int i;
	int size;

	size = WIDTH * HEIGHT;
	i = 0;
	while (i < size)
	{
		data[i] = BACKGROUND;
		i++;
	}
}

void	action(t_mlx *w)
{
	t_point *p;

	mlx_clear_window(w->mlx, w->win);
	set_back(w);
	p = rotate(w);
	project(p, w);
	put_line(p, w);
}
