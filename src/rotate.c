#include "fdf.h"

static t_point	rotate(t_point *t, t_mlx *w)
{
	t_point	new;
	float	cc;
	float	ss;
	float	temp;

	new.color = t->color;
	//printf("%f\n", w->cam.zk);
	cc = cosf(w->cam.angleX / 180.0f * 3.14159f);
	ss = sinf(w->cam.angleX / 180.0f * 3.14159f);
	//xrot
	new.y = (float)cc * t->y + ss * t->z * w->cam.zk;
	new.z = (float)cc * t->z * w->cam.zk - ss * t->y;
	new.x = t->x;
	//yrot
	cc = cosf(w->cam.angleY / 180.0f * 3.14159f);
	ss = sinf(w->cam.angleY / 180.0f * 3.14159f);
	temp = new.x;
	new.x = (float)cc * new.x - ss * new.z;
	new.z = (float)cc * new.z + ss * temp;
	//zrot
	cc = cosf(w->cam.angleZ / 180.0f * 3.14159f);
	ss = sinf(w->cam.angleZ / 180.0f * 3.14159f);
	temp = new.x;
	new.x = (float)cc * new.x + ss * new.y;
	new.y = (float)cc * new.y - ss * temp;
	return (new);
}

t_point	*rotate_all(t_mlx *w)
{
	t_point	*new;
	int	i;
	int size;

    colorfix(&w->points, w);
	size = w->xsize * w->ysize;
	new = (t_point *)malloc(size * sizeof(t_point));
	i = 0;
	while (i < size)
	{
		new[i] = rotate(&w->points[i], w);
        //printf("ROT (%f, %f, %f)\n", new[i].x, new[i].y, new[i].z);
		i++;
	}
	return (new);
}
