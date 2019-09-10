/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:01:38 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/09/10 20:38:55 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_atoi(char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
char	*ft_strcat(char *dest, char *src);
int     ft_strcmp(unsigned char *s1,unsigned char *s2);
char	*ft_strcpy(char *dest, char *src);
int	ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, int nb);
int	ft_strncmp(unsigned char *s1, unsigned char *s2, unsigned int n);
#endif