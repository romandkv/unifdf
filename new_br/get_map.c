#include "fdf.h"

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

	ar = (int *)malloc(buff_len(buff));
	i = 0;
	while (buff[i])
	{
		ar[i] = ft_atoi(buff[i]);
		i++;
	}
	return (ar);
}

int		get_map(int fd)
{
	t_list	*res;
	t_list	*temp;
	char	*buff;
	char	**split;

	get_next_line(fd, &buff);
	split = ft_strsplit(buff);
	temp = new_list(str_parse(split), buff_len(split));
	res = temp;
	free(buff);
	free(split);
	while (get_next_line(fd, &buff))
	{
		split = ft_strsplit(buff);
		temp->next = push(temp, str_parse(split));
		temp = temp->next;
		free(split);
		free(buff);
	}
	return (res);
}
