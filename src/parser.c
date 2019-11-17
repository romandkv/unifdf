#include "fdf.h"
#include "color.h"

static void	clear(int **ar, int y)
{
	int i;

	i = 0;
	while (i < y)
	{
		free(ar[i]);
		i++;
	}
	free(ar);
}


void    colorget(t_point *t, t_mlx *w)
{
    double per;

    if (w->cam.mode == 4)
        t->color = 0x00000000;
    per = percent(0, w->zsize, abs(t->z));
    if (per < 0.2)
        t->color = w->col[w->cam.mode][0];
    else if (per < 0.4)
        t->color = w->col[w->cam.mode][1];
    else if (per < 0.6)
        t->color = w->col[w->cam.mode][2];
    else if (per < 0.8)
        t->color = w->col[w->cam.mode][3];
    else
        t->color = w->col[w->cam.mode][4];

}


void    colorfix(t_point **t, t_mlx *w)
{
    int i;

    i = 0;
    while (i < w->xsize * w->ysize)
    {
        colorget(&(*t)[i], w);
        i++;
    }
}

t_point	*get_points(int **ar, int x, int y, t_mlx *w)
{
	int		i;
	int		j;
	int		count;
	t_point	*points;
	int     zmax;

	i = 0;
	zmax = 0;
	count = 0;
	points = (t_point *)malloc(sizeof(t_point) * x * y);
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
		    if (zmax < abs(ar[i][j]))
		        zmax = abs(ar[i][j]);
			points[count].x = j - x / 2;
			points[count].y = i - y / 2;
			points[count].z = -ar[i][j];
			count++;
			j++;
		}
		i++;
	}
	w->zsize = zmax;
    //norm(&points, zmax, x * y);
	clear(ar, y);
	return (points);
}
