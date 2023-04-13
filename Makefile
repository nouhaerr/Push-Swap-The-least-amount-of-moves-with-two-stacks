# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/10 08:14:10 by nerrakeb          #+#    #+#              #
#    Updated: 2023/04/10 08:14:10 by nerrakeb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
CFLAGS= -Wall -Wextra -Werror
CFILES= parsing/check_args.c parsing/input_nbrs.c push_swap.c is_sorted.c \
		ft_utils/add_new_stack.c ft_utils/ft_lstlast.c ft_utils/ft_lstsize.c \
		short_sort/short_sort.c short_sort/sort_three.c \
		ft_utils/ft_lstadd_front.c ft_utils/ft_lstprelast.c \
		ft_utils/ft_lstadd_back.c ft_utils/ft_free_stack.c \
		instructions/rotate.c instructions/swap.c instructions/rev_rotate.c \
		instructions/push.c short_sort/sort_four.c short_sort/sort_five.c \
		big_sort/big_sort.c big_sort/get_index_pos.c
OBJ= $(CFILES:.c=.o)
LIBFT= libft.a
LIBFT_DIR= libft/
NAME= push_swap

$(NAME):$(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "\033[1;32m- push_swap program compiled!\033[0m"

$(LIBFT): $(LIBFT_DIR)libft.h
	@$(MAKE) -C $(LIBFT_DIR)
	@mv $(LIBFT_DIR)$(LIBFT) .

all: $(NAME)

clean:
	rm -f $(OBJ)
	@$(MAKE) clean -C $(LIBFT_DIR)
	@echo "\033[1;31m- Object files removed!\033[0m"
fclean: clean
	rm -f $(NAME)
	@rm -f $(LIBFT)

re: fclean all

.PHONY: all clean fclean re bonus
