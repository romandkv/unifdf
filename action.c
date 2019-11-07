#include "fdf.h"

void    action(t_wind *win)
{
	mlx_clear_window(win->mlx_ptr, win->mlx_win);
	t_point **rot = rotate(win->points, win);
	if (win->project != NULL)
	{
		mem_free_p(win->project);
		win->project = get_pro_point(rot, win);
	}
	else
		win->project = get_pro_point(rot, win);
	mem_free_p(rot);
    	t_vector **v = make_vec(win->project, win->width, win->height);
   	put_all(v, win);
    	mem_free_v(v);
}
