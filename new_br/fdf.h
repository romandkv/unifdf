#ifndef FDF_H
#define FDF_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <mlx.h>

#define WIDTH 700
#define HEIGHT 700

typedef struct		s_list
{
	int		*num;
	struct s_list	*next;
}			t_list;

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
}			t_camera;

typedef struct		s_image
{
	void		*image;
	char		*data;
	int		bpp;
	int		size_line;
	int		endian;
}			t_image;

typedef struct		s_mlx
{
	void		*mlx;
	void		*win;
	t_image		image;
	t_camera	cam;
	t_point		*points;
	t_point		*propoints;
}

#endif
