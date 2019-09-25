/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:49:08 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/24 18:18:44 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (1)
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
}
