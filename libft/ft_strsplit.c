/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:12:29 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/24 17:05:12 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *str, const char d)
{
	size_t n;
	size_t i;

	i = 0;
	n = 0;
	while (str[i] == d && str[i])
		i++;
	while (i < ft_strlen(str))
	{
		if (str[i] != d)
		{
			while (str[i] != d && str[i])
				i++;
			n++;
		}
		else
		{
			i++;
		}
	}
	return (n);
}

static size_t	ft_wl(const char *s, const char d)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != d)
	{
		len++;
	}
	return (len);
}

static char		**ft_fill(size_t *i, size_t *j, char const *s, char c)
{
	char	**r;
	size_t	k;

	if (!s)
		return (NULL);
	if (!(r = (char**)malloc(sizeof(char*) * (1 + ft_count(s, c)))))
		return (NULL);
	while (s[*i] == c && s[*i])
		(*i)++;
	while (s[++(*i)])
	{
		if (s[*i] != c)
		{
			r[*j] = (char*)malloc(sizeof(char) * (ft_wl(&(s[*i]), c) + 1));
			if (!r[*j])
				return (NULL);
			k = -1;
			while (++(k) < ft_wl(&(s[*i]), c))
				r[*j][k] = s[*i + k];
			r[*j][k] = '\0';
			*i = *i + ft_wl(&(s[*i]), c) - 1;
			(*j)++;
		}
	}
	return (r);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**res;

	i = -1;
	j = 0;
	res = ft_fill(&i, &j, s, c);
	if (res)
		res[j] = NULL;
	return (res);
}
