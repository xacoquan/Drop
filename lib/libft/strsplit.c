/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 16:35:31 by mbacoux           #+#    #+#             */
/*   Updated: 2013/12/01 22:53:20 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_w(char const *s, char c)
{
	char		nw;
	size_t		i;
	size_t		w;

	nw = 1;
	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == c)
			nw = 1;
		else if (nw)
		{
			w++;
			nw = 0;
		}
		i++;
	}
	return (w);
}

static size_t	ft_strlen_w(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char		*ft_dup_w(char const *s, char c)
{
	size_t		n;
	char		*w;

	n = ft_strlen_w(s, c);
	w = ft_strnew(n);
	ft_strncpy(w, s, n);
	return (w);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**ret;
	size_t		i;
	size_t		w;
	size_t		n;

	i = 0;
	w = ft_count_w(s, c);
	ret = (char **)ft_memalloc((sizeof(char **)) * (w + 1));
	n = 0;
	while (n < w && ret)
	{
		while (s[i] == c)
			i++;
		ret[n] = ft_dup_w(&s[i], c);
		i += ft_strlen_w(&s[i], c);
		n++;
	}
	return (ret);
}


