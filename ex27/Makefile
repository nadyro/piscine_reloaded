# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsehnoun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/11 23:34:44 by nsehnoun          #+#    #+#              #
#    Updated: 2017/04/12 02:34:56 by nsehnoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putstr.c \
	  ft_putchar.c

SRC2 = ft_putstr.o \
	   ft_putchar.o

SRC3 = ft_display_file.c

NAME = libft.a

HEADERS = libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(SRC2)
	gcc -o ft_display_file $(SRC3) $(SRC)

clean:
	rm -f $(SRC2)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
