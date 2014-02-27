/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_rsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 02:23:12 by mbacoux           #+#    #+#             */
/*   Updated: 2014/02/27 02:28:36 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_tlist_rsort(t_tlist *lst, t_tlist_cmp cmp)
{
	t_tlist_node	*i;
	t_tlist_node	*j;
	t_tlist_node	*inxt;
	t_tlist_node	*jnxt;

	if (lst->elements == NULL || lst->elements->next == NULL)
		return ;
	i = lst->elements;
	while (i)
	{
		inxt = i->next;
		j = i->next;
		while (j)
		{
			jnxt = j->next;
			if (cmp(i, j) <= 0)
				ft_tlist_swap(lst, i, j);
			j = jnxt;
		}
		i = inxt;
	}
}

