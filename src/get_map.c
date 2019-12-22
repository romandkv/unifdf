/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 20:28:05 by pshock            #+#    #+#             */
/*   Updated: 2019/12/22 15:14:10 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "errors.h"

void		clear(char **line)
{
	int i;

	i = 0;
	while (line[i])
	{
		free(line[i]);
		i++;
	}
	free(line);
}

static int	buff_len(char **buff)
{
	int i;

	i = 0;
	while (buff[i])
		i++;
	return (i);
}

static int	*str_parse(char **buff)
{
	int *ar;
	int i;

	ar = (int *)malloc(buff_len(buff) * sizeof(int));
	i = 0;
	while (buff[i])
	{
		ar[i] = ft_atoi(buff[i]);
		i++;
	}
	return (ar);
}

t_list		*get_map(int fd)
{
	t_list	*res;
	t_list	*temp;
	char	*buff;
	char	**split;

	get_next_line(fd, &buff);
	if (!*buff)
		exit(0);
	split = ft_strsplit(buff, ' ');
	temp = new_list(str_parse(split), buff_len(split));
	res = temp;
	free(buff);
	clear(split);
	while (get_next_line(fd, &buff))
	{
		split = ft_strsplit(buff, ' ');
		res->next = push(str_parse(split));
		if (temp->x_size != buff_len(split))
			return (NULL);
		res = res->next;
		clear(split);
		free(buff);
	}
	return (temp);
}
