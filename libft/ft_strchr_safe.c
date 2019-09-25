/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:28:54 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/24 18:20:17 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_safe(const char *s, int c)
{
	size_t i;

	i = 0;
	if (!s)
		return (NULL);
	while (i < ft_strlen(s))
	{
		if (s[i] == (char)c)
		{
			return ((char*)(s + i));
		}
		if (!s[i])
		{
			return (NULL);
		}
		i++;
	}
	return (NULL);
}
