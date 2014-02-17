/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 14:34:08 by mbacoux           #+#    #+#             */
/*   Updated: 2013/12/01 23:02:33 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list * (*f)(t_list *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	new = f(lst);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		tmp->next = f(lst);
		tmp = tmp->next;
		lst = lst->next;
	}
	tmp->next = NULL;
	return (new);
}

