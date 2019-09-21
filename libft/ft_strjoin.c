/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:58:08 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/21 21:46:45 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	j;

	j = 0;
	if (!s1 || !s2)
		return (NULL);
	join = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!join)
		return (NULL);
	while (*s1)
	{
		join[j] = *s1;
		s1++;
		j++;
	}
	while (*s2)
	{
		join[j] = *s2;
		s2++;
		j++;
	}
	join[j] = '\0';
	return (join);
}
