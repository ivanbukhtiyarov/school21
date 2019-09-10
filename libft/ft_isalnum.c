/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:53:58 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/10 20:49:59 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z')
	&& !(c >= '0' && c <= '9'))
		return (0);
	return (c);
}
