# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbeach <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 14:22:17 by rbeach            #+#    #+#              #
#    Updated: 2020/02/10 14:59:24 by rbeach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: libft.a

libft.a:
	gcc -Wall -Wextra -Werror -c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c -I includes/
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f libft.a

re: fclean all
