#include "fdf.h"

void	line_draw(t_point begin, int longest, int shortest, int d[4])
{
	int numerator;
	int i;
	int x;
	int y;

	x = begin.x;
        y = begin.y;
        numerator = longest >> 1;
	i = 0;
        while (i <= longest)
        {
                numerator += shortest ;

                if (!(numerator<longest))
                {
                        numerator -= longest;
                        x += d[0];
                        y += d[1];
                }
                else
                {
                        x += d[2];
                        y += d[3];
                }
                i++;
	}
}

void init(t_point begin, t_point end, int *d)
{
	if (end.x - begin.x < 0)
                d[0] = -1; 
        else if (end.x - begin.x > 0)
                d[0] = 1;
        if (end.y - begin.y < 0)
                d[1] = -1; 
        else if (end.y - begin.y > 0)
                d[1] = 1;
        if (end.x - begin.x < 0)
                d[2] = -1; 
        else if (end.x - begin.x > 0)
                d[2] = 1;
}

void line(t_point begin, t_point end, t_wind *win)
{
	int 	i;
	int 	longest;
	int 	shortest;
	int 	d[4];

	init(begin, end, d);
	longest = abs(end.y - begin.y);
	shortest = abs(end.y - begin.y);
	if (!(longest > shortest))
	{
		longest = abs(end.x - begin.x);
		shortest = abs(end.x - begin.x);
		if (h < 0)
			d[3] = -1;
	       	else if (h > 0)
		       	d[3] = 1;
		d[2] = 0;
	}
	line_draw(begin, longest, d);
}
