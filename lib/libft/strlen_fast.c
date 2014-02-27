/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_fast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:19:42 by mbacoux           #+#    #+#             */
/*   Updated: 2014/02/27 18:06:05 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"

/*
**  This is a faster implementation for strlen.
**  It should be 2-3 times faster than the standard one.
**  
**  DISCLAIMER : As any '_fast' function provided by Drop, this fuction may
**  be unreliable. Use at your own risk !
*/

size_t			ft_strlen(const char *s)
{
	size_t		i;
	uint64_t	dat;

	i = 0;
	while ((dat = *((uint64_t *)(s + i))))
	{
		if ((dat & 0xFF) == 0)
			break ;
		if ((dat & 0xFF00) == 0)
			return (i + 1);
		if ((dat & 0xFF0000) == 0)
			return (i + 2);
		if ((dat & 0xFF000000) == 0)
			return (i + 3);
		if ((dat & 0xFF00000000) == 0)
			return (i + 4);
		if ((dat & 0xFF0000000000) == 0)
			return (i + 5);
		if ((dat & 0xFF000000000000) == 0)
			return (i + 6);
		if ((dat & 0xFF00000000000000) == 0)
			return (i + 7);
		i += 8;
	}
	return (i);
}

