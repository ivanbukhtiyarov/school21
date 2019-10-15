/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:25:58 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/10/15 17:20:15 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft_finale/libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int get_next_line(const int fd, char **line)
{
	char	buf[BUFF_SIZE + 1];
	int		ret;	

	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
	}
}

int main()
{
	int fd;
	char **str_adr;

	fd = open("test_file", O_RDONLY);
	get_next_line(fd, str_adr);
	printf("%s\n", *str_adr);
	close(fd);
	return (0);
}