/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_push_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 01:36:28 by mbacoux           #+#    #+#             */
/*   Updated: 2014/02/27 01:43:36 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_tlist_push_front(t_tlist *list, t_tlist_node *node)
{
	if (list == NULL)
		return (-1);
	if (list->elements)
		list->elements->prev = node;
	node->next = list->elements;
	node->prev = NULL;
	return (1);
}
