/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffourati <ffourati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 02:24:36 by ffourati          #+#    #+#             */
/*   Updated: 2014/02/27 03:13:02 by ffourati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				ft_tlist_clear(t_tlist *lst, t_tlist_dtor dtor)
{
	t_tlist_node	*node;
	t_tlist_node	*nxt;

	node = lst->elements;
	while (node)
	{
		nxt = node->next;
		ft_tlist_remove(lst, node, dtor);
		node = nxt;
	}
}
