#ifndef FDF_H
#define FDF_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <mlx.h>
#include "../libft/libft.h"

#define WIDTH 1000
#define HEIGHT 1000
#define MENU 220
#define BACKGROUND 0x222222

typedef struct		s_list
{
	int		*num;
	struct s_list	*next;
	int		x_size;
	int		y_size;
}			        t_list;

typedef struct		s_point
{
	float		x;
	float		y;
	float		z;
	int		color;
}			t_point;

typedef	struct		s_camera
{
	int		x_pro;
	int		y_pro;
	float		tetha;
	float		scale;
	float		aspect_ratio;
	float		tang;
	float		angleX;
	float		angleY;
	float		angleZ;
	float       zk;
	int         mode;
}			t_camera;

typedef struct		s_image
{
	void		*image;
	char		*data;
	int		bpp;
	int		size_line;
	int		endian;
}			t_image;

typedef struct      s_mouse
{
    int             oldx;
    int             oldy;
    int             left_click;
    int             right_click;
    int             wheel_click;
}                   t_mouse;

typedef struct		s_mlx
{
    t_mouse     mouse;
    int         **col;
	void		*mlx;
	void		*win;
	t_image		image;
	t_camera	cam;
	t_point		*points;
	t_point		*propoints;
	int		    xsize;
	int		    ysize;
	int         zsize;
}			    t_mlx;

void    draw_menu(t_mlx *w);
int     mouse_press(int button, int x, int y, void *param);
int     mouse_release(int button, int x, int y, void *param);
int     mouse_move(int x, int y, void *param);
void    colorfix(t_point **t, t_mlx *w);
double	percent(int start, int end, int current);
int     key_press(int keycode, void *param);
t_list	*new_list(int *ar, int size);
t_list	*push(t_list *t, int *ar);
void	action(t_mlx *w);
void	bresenham_line(t_point begin, t_point end, t_mlx *w);
t_list	*get_map(int fd);
int		get_next_line(const int fd, char **line);
int	    get_color(int x, int y, t_point start, t_point end);
t_mlx	*create_win(int **ar, int x, int y);
t_point	*get_points(int **ar, int x, int y, t_mlx *w);
void	project_all(t_point *t, t_mlx *w);
void	put_line(t_point *t, t_mlx *w);
t_point	*rotate_all(t_mlx *w);

#endif
