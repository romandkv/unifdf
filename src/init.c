#include "fdf.h"
#include "color.h"

static void init_color(int **col)
{
    col[0][0] = COLOR_1_1;
    col[0][1] = COLOR_1_2;
    col[0][2] = COLOR_1_3;
    col[0][3] = COLOR_1_4;
    col[0][4] = COLOR_1_5;
    col[1][0] = COLOR_2_1;
    col[1][1] = COLOR_2_2;
    col[1][2] = COLOR_2_3;
    col[1][3] = COLOR_2_4;
    col[1][4] = COLOR_2_5;
    col[2][0] = COLOR_3_1;
    col[2][1] = COLOR_3_2;
    col[2][2] = COLOR_3_3;
    col[2][3] = COLOR_3_4;
    col[2][4] = COLOR_3_5;
    col[3][0] = COLOR_4_1;
    col[3][1] = COLOR_4_2;
    col[3][2] = COLOR_4_3;
    col[3][3] = COLOR_4_4;
    col[3][4] = COLOR_4_5;
}

static t_camera	create_cam()
{
	t_camera cam;
	cam.aspect_ratio = (float)HEIGHT / WIDTH;
	cam.x_pro = WIDTH / 2;
	cam.y_pro = HEIGHT / 2;
	cam.tetha = 90;
	cam.angleX = 0;
	cam.angleY = 0;
	cam.angleZ = 0;
	cam.tang = (float)1.0f / tanf(cam.tetha / 2 / 180 * 3.14159);
	cam.scale = 0.001;
	cam.zk = 1;
	cam.mode = 0;
	return (cam);
}

t_mouse create_mouse()
{
    t_mouse m;

    m.left_click = 0;
    m.right_click = 0;
    m.wheel_click = 0;
    return (m);
}


t_mlx	*create_win(int **ar, int x, int y)
{
	t_mlx *m;

	if (!(m = (t_mlx *)malloc(sizeof(t_mlx))))
		return (NULL);
	if (!(m->mlx = mlx_init()))
		return (NULL);
	if (!(m->win = mlx_new_window(m->mlx, WIDTH, HEIGHT, "Win")))
		return (NULL);
	if (!(m->image.image = mlx_new_image(m->mlx, WIDTH, HEIGHT)))
		return (NULL);	
	m->image.data = mlx_get_data_addr(m->image.image, &m->image.bpp,
		&m->image.size_line, &m->image.endian);
	m->cam = create_cam();
    m->col = malloc(sizeof(int *) * 5);
    m->col[0] = malloc(sizeof(int) * 5);
    m->col[1] = malloc(sizeof(int) * 5);
    m->col[2] = malloc(sizeof(int) * 5);
    m->col[3] = malloc(sizeof(int) * 5);
    init_color(m->col);
	m->points = get_points(ar, x, y, m);
	m->xsize = x;
	m->ysize = y;
	m->mouse = create_mouse();
	return (m);
}
