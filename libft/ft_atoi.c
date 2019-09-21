/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 15:51:19 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/21 21:10:19 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long int	sign;
	int				nump;
	long long int	number;

	number = 0;
	sign = 1;
	nump = 0;
	if (*str == '\0')
		return (0);
	while (((str[nump] >= 9) && (str[nump] <= 13)) || (str[nump] == 32))
		nump = nump + 1;
	if ((str[nump] == '-') || (str[nump] == '+'))
	{
		if ((str[nump + 1] < '0') && (str[nump + 1] > '9'))
			return (0);
		if (str[nump] == '-')
			sign = -1;
		nump = nump + 1;
	}
	while ((str[nump] >= '0') && (str[nump] <= '9'))
		number = 10 * number + (long long int)(str[nump++] - '0');
	if (number > number * 10)
		return (sign == -1 ? 0 : -1);
	return (sign * number);
}
