#include "fdf.h"

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

static int	**get_ar(t_list *t)
{
	t_list	*res;
	t_list	*temp;
	int	**ar;
	int	i;

	ar = (int *)malloc(get_len_list(t) * sizeof(t_list));
	i = 0;
	res = t;
	while (res)
	{
		ar[i] = t->num;
		i++;
		temp = res->next;
		free(res);
		res = temp;
	}
	return (ar);
}

int	main(int argc, char **argv)
{
	int **ar;
	int fd;

	if (argc != 2)
		return (ARGS_ER);
	if (!(fd = open(argv[1], O_RDONLY)))
		return (OPEN_ER);
	ar = get_map(fd);
}
