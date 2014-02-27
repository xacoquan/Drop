/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffourati <ffourati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 01:32:27 by ffourati          #+#    #+#             */
/*   Updated: 2014/02/27 02:54:04 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_tlist			*ft_tlist_new(t_tlist_dtor destructor)
{
	t_tlist		*fresh;

	if (!(fresh = (t_tlist *)malloc(sizeof(t_tlist))))
		return (NULL);
	fresh->elements = NULL;
	fresh->dtor = destructor;
	return (fresh);
}
