/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:31:01 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/22 19:10:37 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	needle_len;

	if (ft_strlen(haystack) < ft_strlen(needle) || ft_strlen(needle) > len)
		return (NULL);
	needle_len = ft_strnlen(needle, len);
	if (ft_strlen(needle) != 0 && len == 0)
		return (NULL);
	if (needle_len == 0)
		return (char *)haystack;
	i = 0;
	while (i <= (int)(len - needle_len))
	{
		if ((haystack[0] == needle[0]) &&
			(!ft_strncmp(haystack, needle, needle_len)))
			return (char *)haystack;
		haystack++;
		i++;
	}
	return (NULL);
}
