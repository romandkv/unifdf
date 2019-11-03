#include "fdf.h"

void    mem_free_p(t_point **t)
{
    int i;

    i = 0;
    while (t[i])
    {
        free(t[i]);
        i++;
    }
    free(t);
}

void    mem_free_v(t_vector **v)
{
    int i;

    i = 0;
    while (v[i])
    {
        free(v[i]);
        i++;
    }
    free(v);
}

