/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 17:18:39 by mbacoux           #+#    #+#             */
/*   Updated: 2013/12/01 22:55:05 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_alloc_itoa(int n)
{
	size_t	i;
	char	*buf;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	buf = ft_strnew(i);
	if (buf)
		buf[0] = '0';
	return (buf);
}

char		*ft_itoa(int n)
{
	size_t	i;
	int		d;
	char	*buf;

	i = 0;
	d = 1;
	buf = ft_alloc_itoa(n);
	if (buf)
	{
		if (n < 0)
			buf[i++] = '-';
		else
			n = -n;
		while (n / d < -9)
			d *= 10;
		while (d)
		{
			buf[i++] = '0' - n / d % 10;
			d /= 10;
		}
	}
	return (buf);
}

