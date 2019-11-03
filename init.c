#include "fdf.h"

t_wind  *init()
{
    t_wind *win = (t_wind*)malloc(sizeof(t_wind));
    win->mlx_ptr = mlx_init();
    win->mlx_win = mlx_new_window(win->mlx_ptr, WIDTH, HEIGHT, "MnilibX");
    win->cam->tetha = TETHA;
    win->width = 30;
    win->height = 30;
    win->Xangle = 0;
    win->Yangle = 0;
    win->Zangle = 0;
    return (win);
}