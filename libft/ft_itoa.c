/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 19:23:01 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/21 19:23:04 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_n_len(int n)
{
	size_t len;

	len = 1;
	while (n /= 10)
	{
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	unsigned_n;

	str_len = ft_n_len(n);
	unsigned_n = n;
	if (n < 0)
	{
		unsigned_n = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = unsigned_n % 10 + '0';
	while (unsigned_n /= 10)
		str[--str_len] = unsigned_n % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
