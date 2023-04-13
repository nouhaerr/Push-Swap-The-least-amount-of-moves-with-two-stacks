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
CFILES= ./Mandatory/parsing/check_args.c ./Mandatory/parsing/input_nbrs.c \
		./Mandatory/push_swap.c ./Mandatory/is_sorted.c \
		./Mandatory/ft_utils/add_new_stack.c ./Mandatory/ft_utils/ft_lstlast.c \
		./Mandatory/ft_utils/ft_lstsize.c ./Mandatory/ft_utils/ft_free_stack.c\
		./Mandatory/short_sort/short_sort.c ./Mandatory/short_sort/sort_three.c \
		./Mandatory/short_sort/sort_four.c ./Mandatory/short_sort/sort_five.c \
		./Mandatory/ft_utils/ft_lstadd_front.c ./Mandatory/ft_utils/ft_lstprelast.c \
		./Mandatory/ft_utils/ft_lstadd_back.c \
		./Mandatory/instructions/rotate.c ./Mandatory/instructions/swap.c \
		./Mandatory/instructions/rev_rotate.c ./Mandatory/instructions/push.c \
		./Mandatory/big_sort/big_sort.c ./Mandatory/big_sort/get_index.c
BFILES= ./bonus/parsing_bonus/check_args_bonus.c \
		./bonus/parsing_bonus/input_nbrs_bonus.c \
		./bonus/push_swap_bonus.c ./bonus/is_sorted_bonus.c \
		./bonus/ft_utils_bonus/new_stack_bonus.c ./bonus/ft_utils_bonus/ft_lstlast_bonus.c \
		./bonus/ft_utils_bonus/ft_lstsize_bonus.c ./bonus/ft_utils_bonus/ft_free_stack_bonus.c\
		./bonus/ft_utils_bonus/ft_lstadd_front_bonus.c ./bonus/ft_utils_bonus/ft_lstprelast_bonus.c \
		./bonus/ft_utils_bonus/ft_lstadd_back_bonus.c \
		./bonus/instructions_bonus/rotate_bonus.c ./bonus/instructions_bonus/swap_bonus.c \
		./bonus/instructions_bonus/rev_rotate_bonus.c ./bonus/instructions_bonus/push_bonus.c \
		./bonus/gnl/get_next_line_utils.c ./bonus/gnl/get_next_line.c
OBJ= $(CFILES:.c=.o)
BOBJ= $(BFILES:.c=.o)
LIBFT= libft.a
LIBFT_DIR= libft/
NAME= push_swap
BONUS= checker

$(NAME):$(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "\033[1;32m- push_swap program compiled!\033[0m"

$(LIBFT): $(LIBFT_DIR)libft.h
	@$(MAKE) -C $(LIBFT_DIR)
	@mv $(LIBFT_DIR)$(LIBFT) .

$(BONUS):$(BOBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(BOBJ) $(LIBFT) -o $(BONUS)
	@echo "\033[1;32m- checker program compiled!\033[0m"

all: $(NAME)

bonus: $(BONUS)

clean:
	rm -f $(OBJ)
	rm -f $(BOBJ)
	@$(MAKE) clean -C $(LIBFT_DIR)
	@echo "\033[1;31m- Object files removed!\033[0m"

fclean: clean
	rm -f $(NAME) $(BONUS)
	@rm -f $(LIBFT)
	@echo "\033[1;31m- push_swap/checker programs removed!\033[0m"

re: fclean all

.PHONY: all clean fclean re bonus
