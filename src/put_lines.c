#include "../includes/fdf.h"

void	put_line(t_point *t, t_mlx *w)
{
	int i;
	int size;
	int co;

	co = 0;
	size = w->xsize * w->ysize;
    i = 0;
	while (i < size)
	{
		if (i % w->xsize == w->xsize - 1)
			i++;
		else
		{
		    bresenham_line(t[i], t[i + 1], w);
		    co++;
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
	co +=i;
	free(t);
}
