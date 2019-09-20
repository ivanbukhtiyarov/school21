/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:12:29 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/20 21:34:49 by qlaurenc         ###   ########.fr       */
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
	while (str[i])
	{
		while (str[i] != d)
			i++;
		n++;
	}
	return (n);
}

static size_t	ft_wordlen(const char *s, const char d)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != d)
	{
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**res;

	i = 0;
	j = 0;
	res = (char**)malloc(sizeof(char*) * (1 + ft_count(s, c)));
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			res[j] = (char*)malloc(sizeof(char) * (ft_wordlen(&(s[i]), c) + 1));
			k = 0;
			while (k < ft_wordlen(&(s[i]), c))
			{
				res[j][k] = s[i + k];
				k++;
			}
			i += ft_wordlen(&(s[i]), c);
			j++;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}



