#include "fdf.h"

void	rotate(t_point *t, t_mlx *w)
{
	float cc;
	float ss;
	float temp;

	cc = cosf(w->Xangle / 180.0f * 3.14159f);
	ss = sinf(w->Xangle / 180.0f * 3.14159f);
	//xrot
	temp = t->y;
	t->y = (float)cc * t->y + ss * t->z;
	t->z = (float)cc * t->z - ss * temp;
	//yrot
	cc = cosf(w->Yangle / 180.0f * 3.14159f);
	ss = sinf(w->Yangle / 180.0f * 3.14159f);
	temp = t->x;
        t->x = (float)cc * t->x - ss * t->z;
        t->z = (float)cc * t->z + ss * temp;
	//zrot
        cc = cosf(w->Zangle / 180.0f * 3.14159f);
        ss = sinf(w->Zangle / 180.0f * 3.14159f);
        temp = t->x;
        t->x = (float)cc * t->x + ss * t->y;
        t->z = (float)cc * t->y - ss * temp;
}

void	rotate_all(t_point *t, t_mlx *w)
{
	int i;

	i = 0;
	while (t[i])
	{
		rotate(&t[i], w);
		i++;
	}
}
