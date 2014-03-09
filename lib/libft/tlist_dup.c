/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffourati <ffourati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 01:26:50 by ffourati          #+#    #+#             */
/*   Updated: 2014/03/09 01:52:58 by ffourati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_tlist				*ft_tlist_dup(t_tlist *ori, t_tlist_ctor ctor)
{
	t_tlist			*fresh;
	t_tlist_node	*nu;
	t_tlist_node	*tmp;

	if (!(fresh = (t_tlist *)malloc(sizeof(t_tlist))))
		return (NULL);
	fresh->dtor = ori->dtor;
	fresh->elements = NULL;
	if (ft_tlist_is_empty(ori))
		return (fresh);
	tmp = ori->elements;
	while (tmp->next)
		tmp = tmp->next;
	while (tmp)
	{
		if ((nu = ctor(tmp)) == NULL)
			return (NULL);
		if (ft_tlist_push_front(fresh, ctor(tmp)) < 0)
			return (NULL);
		tmp = tmp->prev;
	}
	return (fresh);
}
