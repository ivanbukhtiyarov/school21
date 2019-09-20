/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:01:38 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/20 15:56:28 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isascii(int c);
int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
char	*ft_strcat(char *dest, char *src);
int     ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, char *src);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *dest, char *src, int nb);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
int		ft_islower(int c);
int		ft_isupper(int c);
int 	ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strdup(const char *s1);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strnlen(const char *s, size_t maxlen);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
char	*ft_strnew(size_t size);
void	ft_striter(char *s, void (*f)(char *));
int		ft_strequ(char const *s1, char const *s2);
char	*ft_strjoin(char const *s1, char const *s2);

#endif