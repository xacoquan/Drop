/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:29:16 by mbacoux           #+#    #+#             */
/*   Updated: 2013/12/01 23:03:25 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memcpy(void * dst, const void * src, size_t n)
{
	void	*odst;

	odst = dst;
	while (n)
	{
		*((char*)dst) = *((char*)src);
		dst = (void*)((char*)dst + 1);
		src = (void*)((char*)src + 1);
		n--;
	}
	return (odst);
}

