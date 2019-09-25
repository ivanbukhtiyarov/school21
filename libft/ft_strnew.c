/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:34:55 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/24 17:17:29 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*area;
	size_t	i;

	i = 0;
	if (size + 1 < size)
		return (NULL);
	area = (char*)malloc(sizeof(char) * (size + 1));
	if (!area)
		return (NULL);
	ft_bzero(area, size + 1);
	return (area);
}
