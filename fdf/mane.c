#include "fdf.h"

int main()
{
	t_wind *win = (t_wind*)malloc(sizeof(t_wind));
//
	win->mlx_ptr = mlx_init();
	win->mlx_win = mlx_new_window(win->mlx_ptr, HEIGHT, WIDTH, "MnilibX");
	//
	int mmm[5][5];
	int i = 0;
	int j = 0;
	t_triangle **tris;
	while (i < 5)
	{
		while (j < 5)
		{
			mmm[i][j] = 0;
			j++;
		}
		i++;
	}
	printf("segaaaaa");
	tris = convert((int **)mmm, 5, 5);
	//
	mlx_loop(win->mlx_ptr);
}
