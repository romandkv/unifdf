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
    	t_wind *win = init();
    	action(win);
    	mlx_hook(win->mlx_win, (1L << 2), 0, rotation, (void *)win);
	mlx_loop(win->mlx_ptr);
	mem_free_p(win->points);
	mem_free_p(win->project);
	free(win->cam);
	free(win);
}
