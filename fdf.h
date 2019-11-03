#ifndef FDF_H
# define FDF_H

#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "pshockg/get_next_line.h"
#include "pshockl/libft.h"

#define abs(x) (x > 0 ? x : -x)
#define DXY 20
#define HEIGHT 1080
#define WIDTH 1920
#define TETHA 54
#define ZNEAR 0.1
#define ZFAR 1000

typedef struct	s_point
{
	float		x;
	float		y;
	float		z;
	int			color;
}				t_point;


typedef struct	s_vector
{
		t_point begin;
		t_point end;
		int		dx;
		int		dy;
}				t_vector;

typedef struct  s_camera
{
    float       tetha;
    float       x;
    float       y;
}               t_camera;

typedef struct	s_wind
{
	void		*mlx_ptr;
	void		*mlx_win;
    t_camera    *cam;
    t_point     **points;
    int         width;
    int         height;
    float       Xangle;
    float       Yangle;
    float       Zangle;
}				t_wind;


typedef struct      s_line
{
    int             *line;
    struct s_line   *next;
}                   t_line;

t_wind    *init(t_wind *win);
int     rotation(int key, void *param);
void    action(t_wind *win);
int	        get_size_point(t_point **t);
int         get_size(int *in);
void        push(int *i, t_line **t);
t_line      *getmap(int fd);
char		**ft_strsplit(char const *s, char c);
void        mem_free_v(t_vector **v);
void        mem_free_p(t_point **t);
t_point     **rotate(t_point **old, t_wind *w);
void		put_all(t_vector **v, t_wind *w);
t_point		**get_points(int **array, int x, int y);
t_point		**get_pro_point(t_point **t, t_wind *w);
t_vector	**make_vec(t_point **in, int x, int z);

#endif
