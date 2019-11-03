#include "fdf.h"

static void	normalize(t_point **p, int x, int z, int y)
{
	int i;

	i = 0;
	while (p[i])
	{
		if ((int)x != 0)
		{
            p[i]->x /= x;
            p[i]->x -= 0.5;
        }
		if ((int)y != 0) {
            p[i]->y /= y;
            p[i]->y -= 1;
            printf("======================================jopa======================================");
        }
		if ((int)z != 0)
		{
            p[i]->z /= z;
            p[i]->z -= 0.5;
        }
		printf("NORMPoint x = %f z = %f y = %f\n", p[i]->x, p[i]->z, p[i]->y);
		i++;
	}
	printf("ENDNORMALIZE\n");
}

t_point		**get_points(int **array, int x, int z)
{
	int	i;
	int	j;
	int	c;
	int	max;
	t_point	**p;

	p = (t_point **)malloc(sizeof(t_point *) * x * z + sizeof(NULL));
	i = 0;
	j = 0;
	c = 0;
	max = 0;
	while (i < x)
	{
		while (j < z)
		{
			p[c] = (t_point *)malloc(sizeof(t_point));
			if (max < (array[i][j]))
				max = (array[i][j]);
			p[c]->x = i;
			p[c]->y = array[i][j];
			p[c]->z = j;
			printf("Point x = %f z = %f y = %f\n", p[c]->x, p[c]->z, p[c]->y);
			c++;
			j++;
		}
		j = 0;
		i++;
	}
	p[c] = NULL;
	normalize(p, x - 1, z - 1, max);
	return (p);
}
