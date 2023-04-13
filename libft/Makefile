# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 23:41:51 by nerrakeb          #+#    #+#              #
#    Updated: 2023/03/21 00:33:59 by nerrakeb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
CFLAGS= -Wall -Wextra -Werror
CFILES= ft_strlcat.c ft_atoi.c ft_isdigit.c call_error.c \
	   	ft_strlen.c ft_split.c \
		ft_putstr.c ft_free.c\
		
OBJ= $(CFILES:.c=.o)
NAME= libft.a

%.o:%.c
	$(CC) $(CFLAGS) -c $<
	
all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
