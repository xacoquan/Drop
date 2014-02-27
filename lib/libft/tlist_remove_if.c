/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_remove_if.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffourati <ffourati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 02:24:36 by ffourati          #+#    #+#             */
/*   Updated: 2014/02/27 02:55:54 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				ft_tlist_remove_if(t_tlist *lst,
										t_tlist_pred pred,
										t_tlist_dtor dtor)
{
	t_tlist_node	*node;
	t_tlist_node	*nxt;

	node = lst->elements;
	while (node)
	{
		nxt = node->next;
		if (pred(node))
			ft_tlist_remove(lst, node, dtor);
		node = nxt;
	}	
}
