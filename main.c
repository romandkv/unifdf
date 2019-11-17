#include <fcntl.h>
#include "fdf.h"
#include "errors.h"

static int	get_len_list(t_list *t)
{
	t_list	*res;
	int	i;

	i = 0;
	res = t;
	while (res)
	{
		i++;
		res = res->next;
	}
	return (i);
}

static int	**get_ar(t_list *t, int *x, int *y)
{
	t_list	*res;
	int	**ar;
	int	i;

	ar = (int *)malloc(get_len_list(t) * sizeof(t_list));
	i = 0;
	res = t;
	*x = t->x_size;
	while (res)
	{
		ar[i] = res->num;
        int j = 0;
        while (j < 19)
        {
            printf("%d ", ar[i][j]);
            j++;
        }
        printf("\n");
		i++;
		res = res->next;
	}
	*y = i;
	free(t);
	return (ar);
}

int	main(int argc, char **argv)
{
	int	**ar;
	int	fd;
	t_mlx	*w;
	int     d[2];

	//if (argc != 2)
	//	return (ARGS_ER);
	if (!(fd = open("maps/t2.fdf", O_RDONLY)))
		return (OPEN_ER);
	t_list *t = get_map(fd);
	ar = get_ar(t, &d[0], &d[1]);
	w = create_win(ar, d[0], d[1]);
	action(w);
	mlx_hook(w->win, 2, 0, key_press, w);
	mlx_hook(w->win, 4, 0, mouse_press, w);
	mlx_hook(w->win, 5, 0, mouse_release, w);
	mlx_hook(w->win, 6, 0, mouse_move, w);
	mlx_loop(w->mlx);
}
