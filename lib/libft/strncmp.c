/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:32:50 by mbacoux           #+#    #+#             */
/*   Updated: 2013/12/01 22:31:25 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((*s1 == '\0' && *s2 == '\0') || n == 0)
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	}
	else
	{
		return ((int)((unsigned int)(*s1) - (unsigned int)(*s2)));
	}
}

