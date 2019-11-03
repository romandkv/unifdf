#include "fdf.h"

int get_size_list(t_line *t)
{
    int i;

    i = 0;
    while (t)
    {
        i++;
        t = t->next;
    }
    return (i);
}

int main()
{
    t_wind *win = init(win);
	int i = 0;
	int j = 0;
	int **mmm = (int **)malloc(sizeof(int *) * 30);
	while (i < 30)
	{
		mmm[i] = (int *)malloc(sizeof(int) * 30);
		while (j < 30)
        {
		    mmm[i][j] = i * j;
			j++;
		}
		i++;
		j = 0;
	}

	win->points = get_points(mmm, 30, 30);
    action(win);
    mlx_hook(win->mlx_win, 2, 0, rotation, (void *)win);
	mlx_loop(win->mlx_ptr);
}
