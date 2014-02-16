/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:28:46 by mbacoux           #+#    #+#             */
/*   Updated: 2013/11/21 19:27:00 by mbacoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
 *  The string.h include is required, because we use
 *  size_t in some definitions.
 *  Then we include this header instead of string.h
 *  in the implementation part. This makes prototype
 *  mismatch easy to detect at compile-time.
 */

# include <string.h>

/*
 *  Some of these functions are redudent (for ex. bzero
 *  and memset). We can use macros to avoid writting
 *  pointless code, but that would break the Norm.
 *  Instead, we should inline these functions to
 *  avoid useless calls.
 */

/*
 *  libc :
 */

void	*ft_memset(void *, int, size_t);
void	ft_bzero(void *, size_t);
void	*ft_memcpy(void *, const void *, size_t);
void	*ft_memccpy(void *, const void *, int, size_t);
void	*ft_memmove(void *, const void *, size_t);
void	*ft_memchr(const void *, int, size_t);
int		ft_memcmp(const void *, const void *, size_t);
size_t	ft_strlen(const char *);
char	*ft_strdup(const char *);
char	*ft_strcpy(char *, const char *);
char	*ft_strncpy(char *, const char *, size_t);
char	*ft_strcat(char *, const char *);
char	*ft_strncat(char *, const char *, size_t);
size_t	ft_strlcat(char *, const char *, size_t);
char	*ft_strchr(const char *, int);
char	*ft_strrchr(const char *, int);
char	*ft_strstr(const char *, const char *);
char	*ft_strnstr(const char *, const char *, size_t);
int		ft_strcmp(const char *, const char *);
int		ft_strncmp(const char *, const char *, size_t);
int		ft_atoi(const char *);
int		ft_isalpha(int);
int		ft_isdigit(int);
int		ft_isalnum(int);
int		ft_isascii(int);
int		ft_isprint(int);
int		ft_toupper(int);
int		ft_tolower(int);

#endif /* LIBFT_H */
