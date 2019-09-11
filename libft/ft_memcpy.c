/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:27:53 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/11 16:40:52 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*s1;
	unsigned char		*s2;

	if (dst == NULL && src == NULL)
		return (dst);
	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dst;
	while (n > 0)
	{
		*s2 = *s1;
		s2++;
		s1++;
		n--;
	}
	return (dst);
}
