/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_fast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:30:21 by mbacoux           #+#    #+#             */
/*   Updated: 2014/02/17 19:38:03 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdint.h>

/*
**  A faster memset - 2 times faster than the basic one.
**  Use at your own risk.
*/

void				*ft_memset(void *b, int c, size_t len)
{
	uint64_t		*ptr;
	char			*cptr;
	uint64_t		dat;
	uint64_t		cl;

	cl = c & 0xFF;
	dat = cl + (cl << 8) + (cl << 16) + (cl << 24) + (cl << 32);
	dat = dat + (cl << 40) + (cl << 48) + (cl << 56);
	ptr = (uint64_t *)b;
	while (len >= 8)
	{
		*ptr = dat;
		ptr++;
		len -= 8;
	}
	cptr = (char *)(ptr);
	while (len--)
	{
		*cptr = (char)c;
		cptr++;
	}
	return (b);
}

