#include "../includes/df.h"

void dop(int keycode, t_mlx *w)
{
    if (keycode == 126)
        w->cam.y_pro -= 3;
    if (keycode == 125)
        w->cam.y_pro += 3;
    if (keycode == 123)
        w->cam.x_pro -= 3;
    if (keycode == 124)
        w->cam.x_pro += 3;
    if (keycode == 84)
        w->cam.angleX -= 3;
    if (keycode == 91)
        w->cam.angleX += 3;
    if (keycode == 88)
        w->cam.angleY += 3;
    if (keycode == 86)
        w->cam.angleY -= 3;
    if (keycode == 49)
    {
        w->cam.angleX = 0;
        w->cam.angleY = 0;
    }
}

int key_press(int keycode, void *param)
{
    t_mlx *w;

    w = (t_mlx *)param;
    dop(keycode, w);
    if (keycode == 6)
        w->cam.scale += 0.0001;
    if (keycode == 7)
        w->cam.scale -= 0.0001;
    if (keycode == 12)
        w->cam.zk += 0.2;
    if (keycode == 13 && w->cam.zk - 0.2 >= 0.0f)
        w->cam.zk -= 0.2;
    if (keycode == 18)
        w->cam.mode = 0;
    if (keycode == 19)
        w->cam.mode = 1;
    if (keycode == 20)
        w->cam.mode = 2;
    if (keycode == 21)
        w->cam.mode = 3;
    if (keycode == 22)
        w->cam.mode = 4;
    action(w);
}


