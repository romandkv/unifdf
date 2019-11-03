#include "fdf.h"

int     get_size(int *in)
{
    int i;

    i = 0;
    while (in[i])
        i++;
    return (i);
}

void    push(int *i, t_line **t)
{
    t_line *new;

    new = (t_line *)malloc(sizeof(t_line));
    new->line = (int *)malloc(get_size(i) * sizeof(int) + sizeof(NULL));
    ft_memcpy(new->line, i, get_size(i) + 1);
    *t = new;
    new->next = NULL;
}
