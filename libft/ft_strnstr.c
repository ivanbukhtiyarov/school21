/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:31:01 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/18 18:52:07 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	needle_len;

	if (ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	needle_len = ft_strnlen(needle, len);
	if (needle_len == 0)
		return (char *)haystack;
	i = 0;
	while (i <= (int)(len - needle_len))
	{
		if ((haystack[0] == needle[0]) &&
			(!strncmp(haystack, needle, needle_len)))
			return (char *)haystack;
		haystack++;
		i++;
	}
	return (NULL);
}
