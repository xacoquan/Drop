/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:48:24 by mbacoux           #+#    #+#             */
/*   Updated: 2013/11/21 18:51:34 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s1;
	i = 0;
	while (*s1 && n)
	{
		if (!s2[i])
			return (str);
		if (*s1 == s2[i])
		{
			i++;
			if (!str)
				str = (char *)s1;
		}
		else
		{
			i = 0;
			str = NULL;
		}
		s1++;
		n--;
	}
	return (NULL);
}

