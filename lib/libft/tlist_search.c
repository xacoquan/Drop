/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffourati <ffourati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 01:56:10 by ffourati          #+#    #+#             */
/*   Updated: 2014/02/27 02:02:10 by ffourati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tlist_node		*ft_tlist_search(t_tlist *lst, t_tlist_pred predicate)
{
	t_tlist_node	*elem;

	elem = lst->elements;
	while (elem)
	{
		if (predicate(elem))
			return (elem);
		elem = elem->next;
	}
	return (NULL);
}
