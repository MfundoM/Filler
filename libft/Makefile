# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmthethw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/08 22:42:02 by mmthethw          #+#    #+#              #
#    Updated: 2018/04/07 11:54:37 by mmthethw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

CC = gcc
FLAGS = -Wall -Werror -Wextra

HEADER = includes/
SRCDIR = sources/

SRC = ft_memset.c              \
	  ft_bzero.c			   \
	  ft_memcpy.c			   \
	  ft_memccpy.c			   \
	  ft_memmove.c			   \
	  ft_memchr.c			   \
	  ft_memcmp.c			   \
	  ft_strlen.c			   \
	  ft_strdup.c			   \
	  ft_strcpy.c			   \
	  ft_strncpy.c			   \
	  ft_strcat.c			   \
	  ft_strncat.c			   \
	  ft_strlcat.c			   \
	  ft_strchr.c			   \
	  ft_strrchr.c			   \
	  ft_strstr.c			   \
	  ft_strnstr.c			   \
	  ft_strcmp.c			   \
	  ft_strncmp.c			   \
	  ft_atoi.c	    		   \
	  ft_isalpha.c			   \
	  ft_isdigit.c  		   \
	  ft_isalnum.c			   \
	  ft_isascii.c	    	   \
	  ft_toupper.c	    	   \
	  ft_tolower.c			   \
	  ft_memalloc.c			   \
	  ft_memdel.c			   \
	  ft_strnew.c			   \
	  ft_strdel.c			   \
	  ft_strclr.c			   \
	  ft_striter.c			   \
	  ft_striteri.c			   \
	  ft_strmap.c			   \
	  ft_strmapi.c			   \
	  ft_strequ.c			   \
	  ft_strnequ.c			   \
	  ft_strsub.c			   \
	  ft_strjoin.c			   \
	  ft_strtrim.c	    	   \
	  ft_strsplit.c            \
	  ft_itoa.c                \
	  ft_putchar.c             \
	  ft_putstr.c              \
	  ft_putendl.c             \
	  ft_putnbr.c              \
	  ft_putchar_fd.c          \
	  ft_putstr_fd.c           \
	  ft_putendl_fd.c          \
	  ft_putnbr_fd.c           \
	  ft_isspace.c             \
	  ft_strrev.c              \
	  ft_wordcount.c		   \
	  ft_lstswap.c			   \
	  get_next_line.c          \
	  ft_lstnew.c              \
	  ft_lstaddlast.c		   \
	  ft_lstadd.c		       \
	  ft_lstdel.c			   \
	  ft_lstdelone.c		   \
	  ft_lstiter.c			   \
	  ft_lstmap.c

O_FILES = $(SRC:.c=.o)

STATE = Updated

all: $(LIB)

$(LIB): $(O_FILES)
	@ranlib $(LIB)

%.o: $(SRCDIR)%.c
	@$(CC) -o $@ $(FLAGS) -I $(HEADER) -c $<
	@ar -rcs $(LIB) $@

clean:
	@rm -f $(O_FILES)

fclean: clean
	$(eval STATE = Created)
	@rm -f $(LIB)

re: fclean all
