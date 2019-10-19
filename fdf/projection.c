#include "fdf.h"

t_matrix	*mat_init()
{
	float fNear = 0.1f;
	float fFar = 1000.0f;
	float fFov = 90.0f;
	float fAspectRatio = (float)HEIGHT / WIDTH;
	float fFovRad = 1.0f / tan(fFov * 0.5 / 180.0f * 3.14159f);
	t_matrix *m;
	(m->mat)[0][0] = fAspectRatio * fFovRad;
	(m->mat)[1][1] = fFovRad;
	(m->mat)[2][2] = fFar / (fFar - fNear);
	(m->mat)[3][2] = -fNear * (m->mat)[2][2];
	(m->mat)[2][3] = 1.0f;
	(m->mat)[3][3] = 0.0f;
	return (m);
}

void		mult_matrix_vector(t_point *i, t_point *o, t_matrix *m)
{
	o->x = i->x * (m->mat)[0][0] + i->y * (m->mat)[1][0] + i->z * (m->mat)[2][0] + (m->mat)[3][0];
	o->y = i->x * (m->mat)[0][1] + i->y * (m->mat)[1][1] + i->z * (m->mat)[2][1] + (m->mat)[3][1];
	o->z = i->x * (m->mat)[0][2] + i->y * (m->mat)[1][2] + i->z * (m->mat)[2][2] + (m->mat)[3][2];
	float w = i->x * (m->mat)[0][3] + i->y * (m->mat)[1][3] + i->z * (m->mat)[2][3] + (m->mat)[3][3];
	if (w != 0.0f)
	{
		o->x /= w;
		o->y /= w;
		o->z /= w;
	}
}

int	get_len(t_triangle **tri)
{
	int i;

	i = 0;
	while (*tri)
	{
		i++;
		tri++;
	}
	return (i);
}

t_triangle	**get_projection_tri(t_triangle **tri)
{
	int i;
	int len;
	t_triangle **vec;
	t_triangle *triang;
	t_matrix *mat;

	len = get_len(tri);
	mat = mat_init();
	i = 0;
	vec = (t_triangle **)malloc(sizeof(t_triangle *) * (len + 1));
	while (i < len)
	{
		mult_matrix_vector(&tri[i]->tr[0], &triang->tr[0], mat);
		mult_matrix_vector(&tri[i]->tr[1], &triang->tr[1], mat);
		mult_matrix_vector(&tri[i]->tr[2], &triang->tr[2], mat);
		vec[i] = (t_triangle *)malloc(sizeof(t_triangle));
		vec[i] = triang;
		i++;
	}
	vec[i] = NULL;
	return (vec);
}

void	put_all(t_wind *win, t_triangle **vec)
{
	int i;

	i = 0;
	while (vec[i])
	{
		put_triangle(win, vec[i]);
		i++;
	}
}
