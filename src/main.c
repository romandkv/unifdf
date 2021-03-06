/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 20:43:30 by pshock            #+#    #+#             */
/*   Updated: 2019/12/22 15:06:07 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "../includes/fdf.h"
#include "../includes/errors.h"

static int	get_len_list(t_list *t)
{
	t_list	*res;
	int		i;

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
	int		**ar;
	int		i;

	ar = (int **)malloc(get_len_list(t) * sizeof(t_list));
	i = 0;
	*x = t->x_size;
	while (t)
	{
		ar[i] = t->num;
		i++;
		res = t->next;
		free(t);
		t = res;
	}
	*y = i;
	return (ar);
}

int			main(int argc, char **argv)
{
	int		**ar;
	int		fd;
	t_mlx	*w;
	int		d[2];
	t_list	*t;

	if (argc != 2)
		return (ARGS_ER);
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (OPEN_ER);
	if (!(t = get_map(fd)))
		return (0);
	ar = get_ar(t, &d[0], &d[1]);
	w = create_win(ar, d[0], d[1]);
	action(w);
	mlx_hook(w->win, 2, 0, key_press, w);
	mlx_hook(w->win, 4, 0, mouse_press, w);
	mlx_hook(w->win, 5, 0, mouse_release, w);
	mlx_hook(w->win, 6, 0, mouse_move, w);
	mlx_loop(w->mlx);
}
