# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asandy <abasifrekesandy@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 21:06:52 by asandy            #+#    #+#              #
#    Updated: 2022/03/17 21:39:55 by asandy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printer.c

OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra 

all: $(NAME)

$(NAME): $(OBJS)
		ar -rc $(NAME) $(OBJS)
	
%.o:%.c ft_printf.h
		cc $(CFLAGS) -o $@ -c $< 

clean:
		rm -rf $(OBJS)
	
fclean:clean 
		rm -f $(NAME)

re: fclean all 