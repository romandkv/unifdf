#include "fdf.h"

static t_point *get_rotZ(t_point *i, float tetha)
{
    t_point *o;
    float   cc;
    float   ss;

    cc = cosf(tetha / 180.0f * 3.14159f);
    ss = sinf(tetha / 180.0f * 3.14159f);
    o = (t_point *)malloc(sizeof(t_point));
    o->x = (float)(i->x * cc + i->y * ss);
    o->y = (float)(i->y * cc - i->x * ss);
    o->z = (float)i->z;
    return (o);
}
static t_point *get_rotX(t_point *i, float tetha)
{
    t_point *o;
    float   cc;
    float   ss;

    cc = cosf(tetha / 180.0f * 3.14159f);
    ss = sinf(tetha / 180.0f * 3.14159f);
    o = (t_point *)malloc(sizeof(t_point));
    o->x = (float)i->x;
    o->y = (float)i->y * cc + i->z * ss;
    o->z = (float)i->z * cc - ss * i->y;
    return (o);
}

static t_point *get_rotY(t_point *i, float tetha)
{
    t_point *o;
    float   cc;
    float   ss;

    cc = cosf(tetha / 180.0f * 3.14159f);
    ss = sinf(tetha / 180.0f * 3.14159f);
    o = (t_point *)malloc(sizeof(t_point));
    o->x = (float)i->x * cc - i->z * ss;
    o->y = (float)i->y;
    o->z = (float)i->x * ss + cc * i->z;
    return (o);
}

t_point **rotate(t_point **old, t_wind *w)
{
    int i;
    int size = sizeof(t_point *) * get_size_point(old) + sizeof(NULL);
    t_point **newX;
    t_point **newY;
    t_point **newZ;

    newX = (t_point **)malloc(size);
    newY = (t_point **)malloc(size);
    newZ = (t_point **)malloc(size);
    i = 0;
    while (old[i]) {
        newX[i] = get_rotX(old[i], w->Xangle);
        newY[i] = get_rotY(newX[i], w->Yangle);
        newZ[i] = get_rotZ(newY[i], w->Zangle);
        i++;
    }
    newZ[i] = NULL;
    i = 0;
    while (newZ[i])
    {
        printf("ROTPoint x = %f z = %f y = %f\n", newZ[i]->x, newZ[i]->z, newZ[i]->y);
        i++;
    }
    return (newZ);
}
