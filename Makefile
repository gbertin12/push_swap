# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/04 10:51:34 by gbertin           #+#    #+#              #
#    Updated: 2022/07/27 09:43:42 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAGS =	-Wall -Wextra -Werror
RM = rm -f
LIBFT_PATH = libft/
SRCS = 	push_swap.c \
		sources/ft_fill_list.c \
		sources/ft_initlst.c \
		sources/ft_insert_and_supp.c \
		sources/ft_little_sort.c \
		sources/ft_push.c \
		sources/ft_big_sort.c \
		sources/ft_rotate_reverse.c \
		sources/ft_rotate.c \
		sources/ft_search.c \
		sources/ft_sort.c \
		sources/ft_free.c \
		sources/ft_create_index.c \
		sources/ft_msg_err.c \
		sources/ft_check_int.c \
		sources/ft_swap.c

HEAD = includes/push_swap.h

OBJ=$(SRCS:.c=.o)

all: $(NAME)

%.o: %.c $(HEAD)
			$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

$(NAME):$(OBJ)
			$(MAKE) -C $(LIBFT_PATH)
			$(CC) $(FLAGS) -o $(NAME) $(OBJ) -lm libft/libft.a

clean: 
			$(MAKE) clean -C $(LIBFT_PATH)
			$(RM) $(OBJ)

fclean: clean
			$(MAKE) clean -C $(LIBFT_PATH)
			$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re