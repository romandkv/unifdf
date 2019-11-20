#include "../includes/fdf.h"

int	point_cmp(t_point p1, t_point p2)
{
	if (p1.x != p2.x || p1.y != p2.y || p1.z != p2.z)
		return (0);
	return (1);
}

int	point_cmp_all(t_point *p1, t_point *p2, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (point_cmp(p1[i], p2[i]))
			return (0);
		i++;
	}
	return (1);
}

void	init_ar(int x, int y, int ***ar)
{
	int i;
	int j;

	i = 0;
	j = 0;
	*ar = (int **)malloc(sizeof(int) * y);
	while (i < y)
	{
		(*ar)[i] = (int *)malloc(sizeof(int) * x);
		while (j < x)
		{
			(*ar)[i][j] = x * y;
			j++;
		}
		j = 0;
		i++;
	}
}

t_point	*res_init(int **ar, int x, int y)
{
	t_point *pout;
	int i;
	int j;
	int c;

	c = 0;
	i = 0;
	j = 0;
	pout = (t_point *)malloc(sizeof(t_point));
	while (i < y)
	{
		while (j < x)
		{
			pout[c].x = i - x / 2;
			pout[c].y = j - y / 2;
			pout[c].z = -ar[i][j];
			j++;
		}
		i++;
		j = 0;
	}
	return (pout);
}

int	test_parser()
{
	t_mlx	w;
	int	x;
	int	y;
	int	**ar;
	t_point	*pout;
	t_point *res;
	
	init_ar(x, y, &ar);
	pout = get_points(ar, x, y, &w);
	res = res_init(ar, x, y);
	return (point_cmp_all(res, pout, x * y));
}
