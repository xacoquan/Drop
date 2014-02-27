/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffourati <ffourati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 02:24:36 by ffourati          #+#    #+#             */
/*   Updated: 2014/02/27 02:38:47 by ffourati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				ft_tlist_remove(t_tlist *lst,
									t_tlist_node *jnk,
									t_tlist_dtor dtor)
{
	t_tlist_dtor	sel;

	sel = NULL;
	if (jnk == lst->elements)
		lst->elements = lst->elements->next;
	if (dtor)
		sel = dtor;
	else if (lst->dtor)
		sel = lst->dtor;
	if (sel)
		sel(jnk);
	if (jnk->next)
		jnk->next->prev = jnk->prev;
	if (jnk->prev)
		jnk->prev->next = jnk->next;
	free(jnk);
}
