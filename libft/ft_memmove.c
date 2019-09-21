/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:45:34 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/21 19:41:55 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	if ((dst == NULL && src == NULL) || s == d)
		return (dst);
	i = -1;
	if (s < d)
	{
		i = 1;
		while (i <= len)
		{
			d[len - i] = s[len - i];
			len--;
		}
	}
	else
	{
		while (++i < len)
			d[i] = s[i];
	}
	return (dst);
}
