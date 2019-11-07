#include "fdf.h"

t_wind  *init()
{
	t_wind *win = (t_wind*)malloc(sizeof(t_wind));
	win->mlx_ptr = mlx_init();
	win->mlx_win = mlx_new_window(win->mlx_ptr, WIDTH, HEIGHT, "MnilibX");
	win->cam = (t_camera *)malloc(sizeof(t_camera));
	win->cam->tetha = TETHA;
	win->width = 3;
	win->height = 3;
	win->Xangle = 0;
	win->Yangle = 50;
	win->Zangle = 0;
        int i = 0;
   	int j = 0;
	int **mmm = (int **)malloc(sizeof(int *) * 3);
	while (i < 3)
        {
		mmm[i] = (int *)malloc(sizeof(int) * 3);
		while (j < 3)
		{		
   			mmm[i][j] = i * j;
			j++;
		}
		i++;
		j = 0;
	}
	win->points = get_points(mmm, 3, 3);
    	return (win);
}
