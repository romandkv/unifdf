#include "fdf.h"

t_camera	create_cam()
{
	t_camera cam;
	cam.aspect_ratio = (float)HEIGHT / WIDTH;
	cam.x_pro = 0;
	cam.y_pro = 0;
	cam.tetha = 90;
	cam.angleX = 0;
	cam.angleY = 0;
	cam.angleZ = 0;
	cam.tang = (float)1.0f / tanf(tetha / 2 / 180 * 3.14159);
	cam.scale = 0.001;
	return (cam);
}

t_mlx	*create_win(int *ar, int x, int y)
{
	t_mlx *m;

	if (!(m = (t_mlx *)malloc(sizeof(t_mlx)))
		return (NULL);
	if (!(m->mlx = mlx_init()))
		return (NULL);
	if (!(m->win = mlx_new_window(n->mlx, WIDTH, HEIGHT)))
		return (NULL);
	if (!(m->image.image = mlx_new_image(m->mlx, WIDTH, HEIGHT)))
		return (NULL);	
	m->image.data = mlx_get_data_addr(m->image.image, &m->image.bpp,
		&m->image.sizeline, &m->image.endian);
	m->cam = create_cam();
	m->cam = get_points(ar, x, y);
	return (m);
}
