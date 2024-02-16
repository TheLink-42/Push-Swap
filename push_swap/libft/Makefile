# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 12:50:57 by jbaeza-c          #+#    #+#              #
#    Updated: 2024/02/16 12:52:21 by jimmy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[0;32m
RED = \033[0;31m
PURPLE = \033[01;35m
NC = \033[0m

SRC_DIR = src/
SRC = 		$(addprefix $(SRC_DIR)string/, ft_split.c ft_strlcat.c ft_strncmp.c \
			ft_substr.c ft_atoi.c ft_itoa.c ft_strchr.c \
			ft_strlcpy.c ft_strnstr.c ft_strdup.c ft_strlen.c \
			ft_strrchr.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
			ft_striteri.c ft_itoa_base.c)				\
		$(addprefix $(SRC_DIR)put_fd/, ft_putchar_fd.c ft_putstr_fd.c \
			ft_putnbr_fd.c ft_putnbru_base_fd.c ft_putendl_fd.c \
			ft_putptr_fd.c)						\
		$(addprefix $(SRC_DIR)ascii/, ft_isalnum.c ft_isprint.c ft_isalpha.c \
			ft_isdigit.c ft_isascii.c ft_tolower.c ft_toupper.c)	\
		$(addprefix $(SRC_DIR)lst/, ft_lstadd_back.c ft_lstadd_front.c \
			ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
			ft_lstmap.c ft_lstnew.c ft_lstsize.c)			\
		$(addprefix $(SRC_DIR)memory/, ft_bzero.c ft_memccpy.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_calloc.c)						\
		$(addprefix $(SRC_DIR)printf/, ft_printf.c print_char.c print_decimal.c \
			print_hexalow.c print_hexaup.c print_integer.c \
			print_octal.c print_perc.c print_ptr.c print_string.c)	\
		$(addprefix $(SRC_DIR)gnl/, get_next_line.c get_next_line_utils.c)		
		
OBJ_DIR = obj/
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)


CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -I inc

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "compiling $(PURPLE)$(NAME)$(NC)..."
	@echo "$(PURPLE)$(NAME)$(NC) $(GREEN)compiled$(NC) successfully!"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)
	@echo "deleting $(PURPLE)libft object files$(NC)..."
	@echo "$(PURPLE)libft object files$(NC) $(RED)deleted$(NC) successfully!"

fclean:
	@$(RM) $(NAME)
	@echo "deleting $(PURPLE)$(NAME)$(NC)..."
	@echo "$(PURPLE)$(NAME)$(NC) $(RED)deleted$(NC) successfully!"

re: fclean all

.PHONY: all clean fclean re
