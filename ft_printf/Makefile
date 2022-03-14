# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asandy <asandy@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 21:06:52 by asandy            #+#    #+#              #
#    Updated: 2022/03/14 21:06:56 by asandy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror - c &(SRC)
	ar - rc $(NAME) *.o 
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean 
		rm -f $(NAME)

re: fclean all s
