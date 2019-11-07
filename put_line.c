#include "fdf.h"

void line(t_vector *v, t_wind *win) {
	int w = v->end.x - v->begin.x ;
	int h = v->end.y - v->begin.y ;
	int x;
	int y;
	int i;
	int numerator;
	int longest;
	int shortest;
	int dx1 = 0, 
	    dy1 = 0, 
	    dx2 = 0, 
	    dy2 = 0;

	if (w < 0) 
		dx1 = -1;
       	else if (w > 0)
	       	dx1 = 1;
	if (h < 0)
	       	dy1 = -1;
       	else if (h > 0)
	       	dy1 = 1;
	if (w < 0)
	       	dx2 = -1;
       	else if (w > 0)
	       	dx2 = 1;
	longest = abs(w) ;
	shortest = abs(h) ;
	if (!(longest > shortest))
	{
		longest = abs(h);
		shortest = abs(w);
		if (h < 0) 
			dy2 = -1;
	       	else if (h > 0)
		       	dy2 = 1;
		dx2 = 0;
	}
	x = v->begin.x;
	y = v->begin.y;
	numerator = longest >> 1;
	i = 0;
	while (i <= longest) 
	{
		mlx_pixel_put(win->mlx_ptr, win->mlx_win, x, y, 0xFBEEE6);
		numerator += shortest ;
        
		if (!(numerator<longest)) 
		{
		    	numerator -= longest;
			x += dx1;       
		    	y += dy1;
		} 
		else 
		{
			x += dx2;
		     	y += dy2;
		}
		i++;
    }
}

void	put_all(t_vector **v, t_wind *w)
{
	int i;

	i = 0;
	while (v[i])
	{
		line(v[i], w);
		i++;
	}
}
