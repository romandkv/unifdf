#include "fdf.h"

void	put_line(t_point *t, t_mlx *w)
{
	int i;

	while (t[i])
	{
		if (i == w->xsize - 1)
			i++;
		else
		{
			line(t[i], t[i + 1], w);
			i++;
		}
	}
	i = 0;
	while (t[i])
	{
		if (!t[i + w->xsize])
			break ;
		line(t[i], t[i + w->xsize]);
		i++;
	}
}
