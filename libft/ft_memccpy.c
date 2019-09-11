/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:18:02 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/11 19:29:18 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
// {
// 	const unsigned char	*s1;
// 	unsigned char		*s2;
// 	size_t				i;

// 	i = 0;
// 	if (dst == NULL && src == NULL)
// 		return (dst);
// 	s1 = (unsigned char *)src;
// 	s2 = (unsigned char *)dst;
// 	while (i < n)
// 	{
// 		if (*s1 == (unsigned char)c)
// 			return (s2 + i);
// 		*(s2 + i) = *(s1 + i);
// 		i++;
// 	}
// 	return (s2);
// }

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
char *ptr;
size_t i;

i = -1;
ptr = dst;
while (++i < n)
{
*(ptr + i) = *((unsigned char *)src + i);
if (*((unsigned char *)src + i) == (unsigned char)c)
return (dst + i + 1);
}
return (NULL);
}
