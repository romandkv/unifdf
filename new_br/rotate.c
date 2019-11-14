#include "fdf.h"

t_point	rotate(t_point *t, t_mlx *w)
{
	t_point	new;
	float	cc;
	float	ss;
	float	temp;

	cc = cosf(w->Xangle / 180.0f * 3.14159f);
	ss = sinf(w->Xangle / 180.0f * 3.14159f);
	//xrot
	temp = t->y;
	new.y = (float)cc * t->y + ss * t->z;
	new.z = (float)cc * t->z - ss * temp;
	new.x = t->x;
	//yrot
	cc = cosf(w->Yangle / 180.0f * 3.14159f);
	ss = sinf(w->Yangle / 180.0f * 3.14159f);
	temp = new.x;
        new.x = (float)cc * new.x - ss * new.z;
        new.z = (float)cc * new.z + ss * temp;
	//zrot
        cc = cosf(w->Zangle / 180.0f * 3.14159f);
        ss = sinf(w->Zangle / 180.0f * 3.14159f);
        temp = mew.x;
        new.x = (float)cc * new.x + ss * new.y;
        new.z = (float)cc * new.y - ss * temp;
	return (new);
}

t_point	*rotate_all(t_mlx *w)
{
	t_point	*new;
	int	i;

	i = 0;
	while (w->points[i])
		i++;
	new = (t_point *)malloc(i * sizeof(t_point) + 1);
	i = 0;
	while (w->points[i])
	{
		new[i] = rotate(&w->points[i], w);
		i++;
	}
	new[i] = NULL;
	return (new)
}
