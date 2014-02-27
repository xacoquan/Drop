/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 02:23:12 by mbacoux           #+#    #+#             */
/*   Updated: 2014/02/27 02:26:35 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_tlist_sort(t_tlist *lst, t_tlist_cmp cmp)
{
	t_tlist_node	*i;
	t_tlist_node	*j;

	if (lst->elements == NULL || lst->elements->next == NULL)
		return ;
	i = lst->elements;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (cmp(i, j) > 0)
				ft_tlist_swap(lst, i, j);
			j = j->next;
		}
		i = i->next;
	}
}

