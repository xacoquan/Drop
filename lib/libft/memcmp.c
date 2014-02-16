/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:10:07 by mbacoux           #+#    #+#             */
/*   Updated: 2013/11/20 17:16:57 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	c;

	while (n--)
	{
		c = *((unsigned char*)s1) - *((unsigned char*)s2);
		s1 = (void*)((char*)s1 + 1);
		s2 = (void*)((char*)s2 + 1);
		if (c)
		{
			return ((int)c);
		}
	}
	return (0);
}

