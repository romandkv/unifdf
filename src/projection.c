#include "../includes/fdf.h"

static void	project(t_point *t, t_mlx *w)
{
	t->z += 10;
	t->x = (float)w->cam.aspect_ratio * w->cam.tang * t->x;
	t->y = (float)w->cam.tang * t->y;
	/*if (t->z != 0)
	{
		t->x /= t->z;
		t->y /= t->z;
	}*/
	t->x *= w->cam.scale * WIDTH;
	t->y *= w->cam.scale * HEIGHT;
	t->x += w->cam.x_pro;
	t->y += w->cam.y_pro;
}

void	project_all(t_point *t, t_mlx *w)
{
	int i;
	int size;

	size = w->xsize * w->ysize;
	i = 0;
	while (i < size)
	{
		project(&t[i], w);
        //printf("PRO (%f, %f, %f)\n", t[i].x, t[i].y, t[i].z);
		i++;
	}
}
