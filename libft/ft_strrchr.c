/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:09:36 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/18 18:25:59 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = (int)(ft_strlen(s) + 1);
	while (len--)
	{
		if (s[len] == (char)c)
			return ((char*)(s + len));
	}
	return (NULL);
}
