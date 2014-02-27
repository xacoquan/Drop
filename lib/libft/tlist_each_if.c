/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_each_if.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffourati <ffourati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 01:41:47 by ffourati          #+#    #+#             */
/*   Updated: 2014/02/27 01:52:46 by ffourati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_tlist_each_if(t_tlist *l, t_tlist_pred p, t_tlist_func f)
{
	t_tlist_node	*elem;

	elem = l->elements;
	while (elem)
	{
		if (p(elem))
			f(elem);
		elem = elem->next;
	}
}
