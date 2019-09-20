/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:43:47 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/20 19:09:15 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_last_s(char const *s)
{
	size_t	len;
	size_t	n;

	n = 0;
	len = ft_strlen(s);
	while (s[len - 1] && (s[len - 1] == ' ' ||
		s[len - 1] == '\n' || s[len - 1] == '\t'))
	{
		n++;
		len--;
	}
	return (n);
}

char		*ft_strtrim(char const *s)
{
	char	*trimed;
	size_t	e_s;
	size_t	i;

	if (!s)
		return (NULL);
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	if (ft_strlen(s) == 0)
	{
		trimed = (char*)malloc(sizeof(char) * 1);
		*trimed = '\0';
		return (trimed);
	}
	e_s = ft_count_last_s(s);
	trimed = (char*)malloc(sizeof(char) * (ft_strlen(s) - e_s + 1));
	if (!trimed)
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s) - e_s)
		trimed[i] = s[i];
	trimed[i] = '\0';
	return (trimed);
}

