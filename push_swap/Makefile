# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 13:09:21 by jbaeza-c          #+#    #+#              #
#    Updated: 2024/02/16 12:46:09 by jimmy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[0;32m
RED = \033[0;31m
PURPLE = \033[01;35m
NC = \033[0m

SRC_DIR = srcs/
SRC = 	$(SRC_DIR)algorithm/check.c						\
		$(SRC_DIR)algorithm/init.c						\
		$(SRC_DIR)algorithm/main.c						\
		$(SRC_DIR)algorithm/sort_chunky.c				\
		$(SRC_DIR)algorithm/sort_five.c					\
		$(SRC_DIR)algorithm/sort_three.c				\
		$(SRC_DIR)algorithm/sort.c						\
		$(SRC_DIR)commands/push.c						\
		$(SRC_DIR)commands/rev_rotate.c					\
		$(SRC_DIR)commands/rotate.c						\
		$(SRC_DIR)commands/swap.c						\
		$(SRC_DIR)stack_utils/add_back.c				\
		$(SRC_DIR)stack_utils/add_front.c				\
		$(SRC_DIR)stack_utils/find_index.c				\
		$(SRC_DIR)stack_utils/free_stack.c				\
		$(SRC_DIR)stack_utils/get_cheapest.c			\
		$(SRC_DIR)stack_utils/get_cost.c				\
		$(SRC_DIR)stack_utils/get_highest_index.c		\
		$(SRC_DIR)stack_utils/get_last.c				\
		$(SRC_DIR)stack_utils/get_lowest_index.c		\
		$(SRC_DIR)stack_utils/new_node.c				

OBJ_DIR = obj/
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

BONUS_SRC_DIR = bonus/
BONUS_SRC = 	$(BONUS_SRC_DIR)add_back.c				\
				$(BONUS_SRC_DIR)add_front.c				\
				$(BONUS_SRC_DIR)check.c					\
				$(BONUS_SRC_DIR)checker_push.c			\
				$(BONUS_SRC_DIR)checker_rotate.c		\
				$(BONUS_SRC_DIR)checker_rev_rotate.c	\
				$(BONUS_SRC_DIR)checker_swap.c			\
				$(BONUS_SRC_DIR)checker.c				\
				$(BONUS_SRC_DIR)find_index.c			\
				$(BONUS_SRC_DIR)free_stack.c			\
				$(BONUS_SRC_DIR)get_cheapest.c			\
				$(BONUS_SRC_DIR)get_cost.c				\
				$(BONUS_SRC_DIR)get_highest_index.c		\
				$(BONUS_SRC_DIR)get_last.c				\
				$(BONUS_SRC_DIR)get_lowest_index.c		\
				$(BONUS_SRC_DIR)init.c					\
				$(BONUS_SRC_DIR)new_node.c				

BONUS_OBJ_DIR = bonus_obj/
BONUS_OBJ = $(BONUS_SRC:$(BONUS_SRC_DIR)%.c=$(BONUS_OBJ_DIR)%.o)


LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -I includes -I libft/inc

NAME = push_swap
BONUS_NAME = checker

all: $(NAME)
bonus: $(BONUS_NAME)

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)
	@echo "compiling $(PURPLE)$(NAME)$(NC)..."
	@echo "$(PURPLE)$(NAME)$(NC) $(GREEN)compiled$(NC) successfully!"

$(BONUS_NAME): $(LIBFT) $(BONUS_OBJ)
	@$(CC) $(CFLAGS) $(BONUS_OBJ) -o $(BONUS_NAME) $(LIBFT)
	@echo "compiling $(PURPLE)$(BONUS_NAME)$(NC)..."
	@echo "$(PURPLE)$(BONUS_NAME)$(NC) $(GREEN)compiled$(NC) successfully!"

$(LIBFT):
	@make -C $(LIBFT_PATH) all

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

$(BONUS_OBJ_DIR)%.o: $(BONUS_SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make -C $(LIBFT_PATH) clean
	@$(RM) $(OBJ_DIR) $(BONUS_OBJ_DIR)
	@echo "deleting $(PURPLE)object files$(NC)..."
	@echo "$(PURPLE)object files$(NC) $(RED)deleted$(NC) successfully!"

fclean: clean
	@make -C $(LIBFT_PATH) fclean
	@$(RM) $(NAME) $(BONUS_NAME)
	@echo "deleting $(PURPLE)$(NAME)$(NC) and $(PURPLE)$(BONUS_NAME)$(NC)..."
	@echo "$(PURPLE)$(NAME)$(NC) and $(PURPLE)$(BONUS_NAME)$(NC) $(RED)deleted$(NC) successfully!"


re: fclean all

.PHONY: all bonus clean fclean re
