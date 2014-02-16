/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:46:05 by mbacoux           #+#    #+#             */
/*   Updated: 2013/11/20 17:55:24 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*str;

	str = (char*)(malloc(ft_strlen(s1) + 1));
	if (str)
	{
		ft_strcpy(str, s1);
	}
	return (str);
}

