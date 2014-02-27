/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 02:23:12 by mbacoux           #+#    #+#             */
/*   Updated: 2014/02/27 19:09:15 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_tlist_sort(t_tlist *lst, t_tlist_cmp cmp)
{
	t_tlist_node	*i;
	t_tlist_node	*inxt;
	char			c;

	if (lst->elements == NULL || lst->elements->next == NULL)
		return ;
	c = 1;
	while (c)
	{
		i = lst->elements;
		c = 0;
		while (i->next)
		{
			inxt = i->next;
			if (cmp(i, i->next) > 0)
			{
				ft_tlist_swap(lst, i, i->next);
				c = 1;
			}
			i = inxt;
		}
	}
}

