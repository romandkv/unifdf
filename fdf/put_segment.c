#include "fdf.h"

t_camera	*set_camera(int x, int y, int z)
{
	t_camera *cam = (t_camera*)malloc(sizeof(t_camera));
	cam->x = x;
	cam->y = y;
	cam->z = z;
	return (cam);
}

t_point		*get_point(int i, int j, int z)
{
	t_point *point = (t_point *)malloc(sizeof(t_point));
	point->x = i;
	point->y = j;
	point->z = z;
	return (point);
}

t_triangle	*get_tri(int i, int j, int **array)
{
	t_triangle *tr = (t_triangle *)malloc(sizeof(t_triangle));
	tr->tr[0] = *get_point(i, j, array[i][j]);
	tr->tr[1] = *get_point(i + 1, j, array[i + 1][j]);
	tr->tr[2] = *get_point(i, j + 1, array[i][j + 1]);
	return (tr);
}

t_triangle	**convert(int **array, int x, int y)
{
	printf("strat");
	int i;
	int j;
	int count;
	t_triangle **tris;

	tris = (t_triangle **)malloc(sizeof(t_triangle *) * (x - 1) * (y - 1) + 1);
	i = 0;
	j = 0;
	while (i < x - 1)
	{
		while (j < y - 1)
		{
			printf("start while");
			tris[i + j] = get_tri(i, j, array);
			j++;
		}
		i++;
	}
	tris[i + j] = NULL;
	return (tris);
}

