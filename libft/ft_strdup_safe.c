/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:58:36 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/24 17:59:23 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_safe(const char *s1)
{
	size_t	len;
	char	*copy;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + 1;
	if (!(copy = malloc(sizeof(char) * len)))
		return (NULL);
	ft_memcpy(copy, s1, len);
	return (copy);
}
