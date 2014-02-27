/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_push_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 01:36:28 by mbacoux           #+#    #+#             */
/*   Updated: 2014/02/27 01:56:21 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_tlist_push_back(t_tlist *list, t_tlist_node *node)
{
	t_tlist_node	*elem;

	if (list == NULL)
		return (-1);
	if (!list->elements)
		return (ft_tlist_push_front(list, node));
	elem = list->elements;
	while (elem->next)
		elem = elem->next;
	elem->next = node;
	node->prev = elem;
	node->next = NULL;
	return (1);
}

