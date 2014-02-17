/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:56:30 by mbacoux           #+#    #+#             */
/*   Updated: 2013/12/01 22:37:55 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' '
			|| c == '\t'
			|| c == '\n'
			|| c == '\v'
			|| c == '\r'
			|| c == '\f');
}

int			ft_atoi(const char *str)
{
	int		ret;
	char	sign;

	sign = 1;
	ret = 0;
	while (ft_isspace(*str))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-' ? -1 : 1);
		str++;
	}
	while (ft_isdigit(*str))
	{
		ret = ret * 10 + sign * (*str - '0');
		str++;
	}
	return (ret);
}

