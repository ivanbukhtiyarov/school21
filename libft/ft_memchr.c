/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:48:06 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/18 15:03:08 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*dig;

	dig = (char *)s;
	i = 0;
	while (i < n)
	{
		if (dig[i] == (char)c)
		{
			return ((void *)dig + i);
		}
		i++;
	}
	return (NULL);
}
