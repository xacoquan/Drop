/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 19:51:34 by mbacoux           #+#    #+#             */
/*   Updated: 2013/12/01 22:52:49 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_iswp(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char				*ft_strtrim(char const *s)
{
	unsigned int	start;
	size_t			len;

	start = 0;
	while (ft_iswp(s[start]))
		start++;
	len = ft_strlen(s) - 1;
	while (len && ft_iswp(s[len]))
		len--;
	if (len < start)
		return (ft_strdup(""));
	return (ft_strsub(s, start, len - (size_t)start + 1));
}
