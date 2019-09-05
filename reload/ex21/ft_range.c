/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 22:01:07 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/08/08 22:29:42 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int nb;
	int *arr;
	int *ptr;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	ptr = arr;
	nb = min;
	i = 0;
	while (nb < max)
	{
		ptr[i] = nb;
		i++;
		nb++;
	}
	ptr[i] = '\0';
	return (arr);
}
