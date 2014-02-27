/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 02:04:43 by mbacoux           #+#    #+#             */
/*   Updated: 2014/02/27 18:53:44 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_tlist_swap_cont(t_tlist *lst,
										t_tlist_node *n1,
										t_tlist_node *n2)
{
	t_tlist_node	*tmp;

	if (n2->next == n1)
	{
		ft_tlist_swap_cont(lst, n2, n1);
		return ;
	}
	if (n1->prev)
		n1->prev->next = n2;
	if (n2->next)
		n2->next->prev = n1;
	tmp = n2->next;
	n2->next = n1;
	n1->next = tmp;
	tmp = n1->prev;
	n1->prev = n2;
	n2->prev = tmp;
	if (!tmp)
		lst->elements = n2;
}

void				ft_tlist_swap(t_tlist *lst,
									t_tlist_node *n1,
									t_tlist_node *n2)
{
	t_tlist_node	*tmp;

	if (n1->next == n2 || n2->next == n1)
	{
		ft_tlist_swap_cont(lst, n1, n2);
		return ;
	}	
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

