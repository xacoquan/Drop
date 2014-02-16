/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 00:29:02 by mbacoux           #+#    #+#             */
/*   Updated: 2013/11/21 00:35:08 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == ((char)c))
		{
			return ((char*)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char*)s);
	}
	return (NULL);
}

