/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:10:07 by mbacoux           #+#    #+#             */
/*   Updated: 2013/12/01 23:04:25 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		c;

	while (n)
	{
		c = (int)(*((unsigned char*)s1) - *((unsigned char*)s2));
		s1 = (void*)((char*)s1 + 1);
		s2 = (void*)((char*)s2 + 1);
		if (c)
		{
			return (c);
		}
		n--;
	}
	return (0);
}

