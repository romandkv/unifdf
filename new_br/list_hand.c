#include "fdf.h"

t_list	*new_list(int *ar)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->num = ar;
	new->next = NULL;
	return (new);
}

t_list	*push(t_list *t, int *ar)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	new->num = ar;;
	new->next = NULL;
	t->next = new;
	return (new);
}
