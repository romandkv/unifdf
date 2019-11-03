#include "fdf.h"

static int *get_line(char **in)
{
    int i;
    int *ar;

    i = 0;
    while (in[i])
    {
        i++;
    }
    ar = (int *)malloc(i * sizeof(int) + sizeof(NULL));
    i = 0;
    while (in[i])
    {
        ar[i] = atoi(in[i]);
        i++;
    }
    ar[i] = NULL;
    return (ar);
}

t_line *getmap(int fd)
{
    char *buff;
    char *res;
    t_line *t;
    t_line *result;

    t = (t_line *)malloc(sizeof(t_line));
    result = t;
    int i = 0;

    while (get_next_line(fd, &buff))
    {
        res = ft_strsplit(buff, ' ');
        push(get_line(res), &t);
        t = (t)->next;
    }
    return (result);
}