#ifndef FDF_H
# define FDF_H

#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define abs(x) (x > 0 ? x : -x)
#define DXY 20
#define HEIGHT 1000
#define WIDTH 1000


typedef struct	s_point
{
	int	x;
	int	y;
	int	z;
	int	color;
}		t_point;

typedef struct	s_triangle
{
	t_point tr[3];
}		t_triangle;

typedef struct	s_wind
{
	void	*mlx_ptr;
	void	*mlx_win;
}		t_wind;

typedef struct	s_camera
{
	int	x;
	int	y;
	int	z;
}		t_camera;

typedef struct 	s_matrix
{
	float 	mat[4][4];
}		t_matrix;

void    	put_all(t_wind *win, t_triangle **vec);
void    	put_triangle(t_wind *win, t_triangle *tr);
void    	put_line(t_wind *win, t_point *start, t_point *finish);
t_triangle      **get_projection_tri(t_triangle **tri);
t_triangle      **convert(int **array, int x, int y);
#endif
