/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memalloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:48:54 by mbacoux           #+#    #+#             */
/*   Updated: 2013/12/01 22:42:33 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (size)
	{
		ptr = malloc(size);
		if (ptr)
		{
			ft_bzero(ptr, size);
		}
	}
	return (ptr);
}

