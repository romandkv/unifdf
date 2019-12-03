#include "../includes/fdf.h"

static void	set_back(t_mlx *w)
{
	int i;
	int size;
	int *data;

	data = (int *)w->image.data;
	size = WIDTH * HEIGHT;
	i = 0;
	while (i < size)
	{
		data[i] = (i % WIDTH < MENU) ? 0x000000 : BACKGROUND;
        if (i % WIDTH == MENU)
            data[i] = 0xFFFFFF;
		i++;
	}
}

void	action(t_mlx *w)
{
	t_point *p;

	mlx_clear_window(w->mlx, w->win);
	set_back(w);
	p = rotate_all(w);
	project_all(p, w);
	put_line(p, w);
	mlx_put_image_to_window(w->mlx, w->win, w->image.image, 0, 0);
    draw_menu(w);
}
