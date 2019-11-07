#include "fdf.h"

static void	get_project(t_point *i, t_point *o, t_wind *w)
{
	float asratio;
	float tang;
	float q;

	asratio = (float)HEIGHT / WIDTH;
	tang = 1.0f / tanf(w->cam->tetha / 2.0f / 180.0f * 3.14159f);
	q = (float)ZFAR / (ZFAR - ZNEAR);
	i->z += 3.0f;
	o->x = (float)asratio * tang * i->x;
	o->y = (float)tang * i->y;
	o->z = (float)q * (i->z - (float)ZNEAR);

	if ((int)i->z != 0)
	{
        	o->x /= i->z;
        	o->y /= i->z;
        	o->z /= i->z;
	}
	printf("PRO POINT x = %f y = %f z = %f\n", o->x, o->y, o->z);
}

int	get_size_point(t_point **t)
{
	int i;

	i = 0;
	while (t[i])
		i++;
	return (i);
}

static void	norm_points(t_point **t)
{
	int i;

	i = 0;
	while (t[i])
	{
		t[i]->x++;
		t[i]->x *= 0.5f * (float)WIDTH;
		t[i]->y++;
		t[i]->y *= 0.5f * (float)HEIGHT;
		t[i]->x = WIDTH - t[i]->x;
		t[i]->y = HEIGHT - t[i]->y;
		printf("FINAL PRO POINT x = %f y = %f z = %f\n", t[i]->x, t[i]->y, t[i]->z);
		i++;
	}
}

t_point	**get_pro_point(t_point **t, t_wind *w)
{
	int i;
	t_point	**o;

	i = 0;
	o = (t_point **)malloc(sizeof(t_point *) * get_size_point(t) + sizeof(NULL));
	while (t[i])
	{
		o[i] = (t_point *)malloc(sizeof(t_point));
		get_project(t[i], o[i], w);
		i++;
	}
	o[i] = NULL;
	norm_points(o);
	return (o);
}
