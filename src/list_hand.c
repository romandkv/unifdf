#include "../includes/fdf.h"

t_list	*new_list(int *ar, int size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->num = ar;
	new->x_size = size;
	new->next = NULL;
	return (new);
}

t_list	*push(t_list *t, int *ar)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	new->num = ar;
	new->next = NULL;
	return (new);
}
