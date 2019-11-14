#include "fdf.h"

t_point	*get_points(int **ar, int x, int y)
{
	int		i;
	int		j;
	int		count;
	t_points	*points;

	i = 0;
	count = 0;
	points = (t_point *)malloc(sizeof(t_point) * x * y + 1);
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			points[count].x = j;
			points[count].y = i;
			points[count].z = ar[i][j];
			count++;
			j++;
		}
		i++;
	}
	points[count] = NULL;
	return (points);
}
