t_point *init_res(int size)
{
    t_point *res;
    int     i;

    i = 0;
    res = (t_point *)malloc(sizeof(t_point) * size);
    while (i < size)
    {
        res[i].x = i;
        res[i].y = i * 2;
        res[i].z = i / 2;
        i++;
    }
    return (res);
}

t_mlx   init_mlx()
{
    t_mlx w;

    w.cam.aspect_ratio = 10;
    w.cam.scale = 0.01;
    w.cam.x_pro = 4;
    w.cam.y_pro = 100;
    w.cam.tang = 2;
}

void    project_one(t_point *t, t_mlx w)
{
    t->z += 10;
	t->x = (float)w->cam.aspect_ratio * w->cam.tang * t->x;
	t->y = (float)w->cam.tang * t->y;
    t->x *= w->cam.scale * WIDTH;
	t->y *= w->cam.scale * HEIGHT;
	t->x += w->cam.x_pro;
	t->y += w->cam.y_pro;
}

void    project_res(t_point *res, int size, t_mlx w)
{
    int i;

    i = 0;
    while (i < size)
    {
        project_one(&res[i], w);
        i++;
    }
}

int     test_projection() 
{
    t_point *pout;
    t_point *res;
    int     size;
    t_mlx   w;

    size = 4;
    w = init_mlx();
    project_all(pout, &w);
    res = init_res(size);
    project_res(res, size, w);
}