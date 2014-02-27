/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffourati <ffourati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 02:05:16 by ffourati          #+#    #+#             */
/*   Updated: 2014/02/27 02:16:01 by ffourati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_tlist_size(t_tlist *lst)
{
	size_t			size;
	t_tlist_node	*elem;

	elem = lst->elements;
	size = 0;
	while (elem)
	{
		size += 1;
		elem = elem->next;
	}
	return (size);
}
