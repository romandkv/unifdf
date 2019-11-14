#include "fdf.h"

void	project(t_point *t, t_mlx *w)
{
	t->x = (float)w->aspect_ratio * w->tang * t->x;
	t->y = (float)w->tang * t->y;
	if (t->z != 0)
	{
		t->x /= z;
		t->y /= z;		
	}
	t->x *= w->cam.scale;
	t->y *= w->cam.scale;
}

void	project_all(t_point *t, t_mlx *w)
{
	int i;

	i = 0;
	while (t[i])
	{
		project(&t[i], w);
		i++;
	}
}
