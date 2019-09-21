# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qlaurenc <qlaurenc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 16:39:28 by qlaurenc          #+#    #+#              #
#    Updated: 2019/09/21 20:14:41 by qlaurenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OPTIONS = -c -I. -Wall -Wextra -Werror 
 
NAME = libft.a
 
SRC = *.c
 
OBJ = *.o
 
all: $(NAME)

$(NAME):
	gcc $(OPTIONS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f $(OBJ)
 
fclean: clean
	rm -f $(NAME)
 
re: fclean all