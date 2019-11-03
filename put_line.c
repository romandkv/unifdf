#include "fdf.h"

void line(t_vector *v, t_wind *win) {
    int w = v->end.x - v->begin.x ;
    int h = v->end.y - v->begin.y ;
    int x;
    int y;
    int dx1 = 0, dy1 = 0, dx2 = 0, dy2 = 0 ;
    if (w<0) dx1 = -1 ; else if (w>0) dx1 = 1 ;
    if (h<0) dy1 = -1 ; else if (h>0) dy1 = 1 ;
    if (w<0) dx2 = -1 ; else if (w>0) dx2 = 1 ;
    int longest = abs(w) ;
    int shortest = abs(h) ;
    if (!(longest>shortest)) {
        longest = abs(h) ;
        shortest = abs(w) ;
        if (h<0) dy2 = -1 ; else if (h>0) dy2 = 1 ;
        dx2 = 0 ;
    }
    x = v->begin.x;
    y = v->begin.y;
    int numerator = longest >> 1 ;
    for (int i=0;i<=longest;i++) {
        mlx_pixel_put(win->mlx_ptr, win->mlx_win, x, y, 0xFBEEE6);
        numerator += shortest ;
        if (!(numerator<longest)) {
            numerator -= longest ;
            x += dx1 ;
            y += dy1 ;
        } else {
            x += dx2 ;
            y += dy2 ;
        }
    }
}
static void	brezenham_line(t_vector *v, t_wind *win)
{
	int				s[2];
	int				error[2];
	int				x;
	int				y;
	int				color;

	v->dx = abs((int)v->end.x - (int)v->begin.x);
	v->dy = -abs((int)v->end.y - (int)v->begin.y);
	printf("(%f, %f) -> (%f, %f)\n--------------------BRESTART------------------------\n", v->begin.x, v->begin.y, v->end.x, v->end.y);
	if (v->begin.x == v->end.x && v->begin.y == v->end.y)
		return ;
	printf("jope!");
	s[0] = (int)v->begin.x < (int)v->end.x ? 1 : -1;
	s[1] = (int)v->begin.y < (int)v->end.y ? 1 : -1;
	x = (int)v->begin.x;
	y = (int)v->begin.y;
	error[0] = v->dx + v->dy;
	while ((x - s[0]) != (int)v->end.x && (y - s[1]) != (int)v->end.y)
	{
	    printf("(%d, %d)\n", x , y);
		mlx_pixel_put(win->mlx_ptr, win->mlx_win, x, y, 0xFBEEE6);
		error[1] = 2 * error[0];error[0] += (error[1] >= v->dy) ? v->dy : 0;	
		x += (error[1] >= v->dy) ? s[0] : 0;
		error[0] += (error[1] <= v->dx) ? v->dx : 0;
		y += (error[1] <= v->dx) ? s[1] : 0;
	}
	printf("----------------------BRESTART----------------------\n");
}

void	put_all(t_vector **v, t_wind *w)
{
	int i;

	i = 0;
	printf("-----------------------PUT--------------------------");
	while (v[i])
	{
		line(v[i], w);
		i++;
	}
}
