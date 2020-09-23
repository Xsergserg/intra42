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

NAME = test

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c btree_insert_data.c
	gcc -Wall -Wextra -Werror -o $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader