# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asandy <abasifrekesandy@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 21:06:52 by asandy            #+#    #+#              #
#    Updated: 2022/03/15 21:56:00 by asandy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_print.c ft_printer.c

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror _wextra 

all: $(NAME)

$(NAME): $(OBJS)
	ar - rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean 
		rm -f $(NAME)

re: fclean all s
