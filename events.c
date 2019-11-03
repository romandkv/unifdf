#include "fdf.h"

void    loop(t_wind *w, float dx, float dy)
{
    int i;

    i = 0;
    while (w->points[i])
    {
        w->points[i]->x += dx;
        w->points[i]->y += dy;
        i++;
    }
}


int     rotation(int key, void *param)
{
    t_wind *w;

    w = (t_wind *)param;
    if (key == 7)
        w->cam->tetha -= 1;
    if (key == 6)
        w->cam->tetha += 1;
    if (key ==  83)
        w->Xangle += 1;
    if (key == 85)
        w->Xangle -= 1;
    if (key == 86)
        w->Yangle += 1;
    if (key == 88)
        w->Yangle -= 1;
    if (key == 89)
        w->Zangle += 1;
    if (key == 92)
        w->Zangle -= 1;
    if (key == 126)
    {
        loop(w, 0, 0.01);
    }
    if (key == 124)
    {
        loop(w, -0.01, 0);
    }
    if (key == 125)
    {
        loop(w, 0, -0.01);
    }
    if (key == 123)
    {
        loop(w, 0.01, 0);
    }
    action(w);
}