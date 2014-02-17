/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 00:12:24 by mbacoux           #+#    #+#             */
/*   Updated: 2013/12/01 22:26:09 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *str, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (!str[i])
		{
			return (i);
		}
		i++;
	}
	return (n);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		ret;

	ret = ft_strnlen(dst, size) + ft_strlen(src);
	if (size > ft_strnlen(dst, size) + 1)
	{
		ft_strncat(dst, src, size - ft_strlen(dst) - 1);
	}
	return (ret);
}

