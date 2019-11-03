#include "fdf.h"

void    action(t_wind *win)
{
    mlx_clear_window(win->mlx_ptr, win->mlx_win);
    t_point ** rot = rotate(win->points, win);
    t_point **p = get_pro_point(rot, win);
    mem_free_p(rot);
    t_vector **v = make_vec(p, win->width, win->height);
    mem_free_p(p);
    put_all(v, win);
    mem_free_v(v);

}