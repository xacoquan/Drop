/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 02:04:43 by mbacoux           #+#    #+#             */
/*   Updated: 2014/02/27 02:14:16 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_tlist_swap(t_tlist *lst,
									t_tlist_node *n1,
									t_tlist_node *n2)
{
	t_tlist_node	*tmp;

	if (n1->next)
		n1->next->prev = n2;
	if (n2->next)
		n2->next->prev = n1;
	if (n1->prev)
		n1->prev->next = n2;
	else
		lst->elements = n2;
	if (n2->prev)
		n2->prev->next = n1;
	else
		lst->elements = n1;
	tmp = n1->next;
	n1->next = n2->next;
	n2->next = tmp;
	tmp = n1->prev;
	n1->prev = n2->prev;
	n2->prev = tmp;
}

