/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_each.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffourati <ffourati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 01:41:47 by ffourati          #+#    #+#             */
/*   Updated: 2014/02/27 01:48:29 by ffourati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_tlist_each(t_tlist *lst_obj, t_tlist_func apply)
{
	t_tlist_node		*elem;

	elem = lst_obj->elements;
	while (elem)
	{
		apply(elem);
		elem = elem->next;
	}
}
