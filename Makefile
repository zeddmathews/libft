# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmathews <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/24 09:31:43 by zmathews          #+#    #+#              #
#    Updated: 2019/05/27 16:06:21 by zmathews         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_*.c

INC = libft.h

_O = ft_*.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) -I $(INC)
	ar rc $(NAME) $(_O)
	ranlib $(NAME)
	rm -f $(_O)

clean:
	rm -rf $(_O)

fclean: clean
	rm -rf $(NAME)

re: fclean all
