/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 16:08:38 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/25 16:10:10 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] != '\0' && needle[j] != '\0'
				&& haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return ((char*)(haystack + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
