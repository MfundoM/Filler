# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/07 12:36:36 by mmthethw          #+#    #+#              #
#    Updated: 2018/04/07 13:07:48 by mmthethw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = filler

SRCS :=	src/main.c
SRCS +=	src/scan_map.c
SRCS +=	src/fill_row.c
SRCS += src/check_solution.c
SRCS += src/get_piece.c
SRCS += src/initialize_matrix.c
SRCS += src/print.c
SRCS += src/free_date.c

CC = gcc

FLAGS = -Wall -Werror -Wextra -I./includes

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@echo "\033[34mCreating $(NAME) ...\033[0m"
	@$(CC) -o $(NAME) $(FLAGS) $(OBJ) libft/libft.a
	@echo "\033[32m$(NAME) created succesfully\033[0m"

clean:
	@echo "\033[33mRemoving .o files of $(NAME) ...\033[0m"
	@make clean -C libft
	@rm -f $(OBJ)
	@echo "\033[31m.o files removed\033[0m"

fclean: clean
	@echo "\033[33mRemoving $(NAME) ...\033[0m"
	@make fclean -C libft
	@rm -f $(NAME)
	@echo "\033[31m$(NAME) removed successfully\033[0m"

re: fclean all