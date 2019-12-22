/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_hand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 22:46:21 by pshock            #+#    #+#             */
/*   Updated: 2019/12/22 15:12:52 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

t_list	*push(int *ar)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	new->num = ar;
	new->next = NULL;
	return (new);
}
