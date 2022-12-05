# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szerisen <szerisen@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/10 23:13:54 by szerisen          #+#    #+#              #
#    Updated: 2021/07/10 23:14:12 by szerisen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = main.c ft_atoi.c ft_putnbr.c ft_strcmp.c op.c 

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

clean:
	rm -f *.o

re: fclean all
