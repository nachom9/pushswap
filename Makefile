# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imelero- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 16:30:44 by imelero-          #+#    #+#              #
#    Updated: 2025/11/13 18:03:03 by imelero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
FLAGS = -Wall -Wextra -Werror

HEADER = push_swap.h

SRC = main.c \
	  push_swap_alg.c \
	  push_swap_parse.c \
      push_swap_swap.c \
	  push_swap_push.c \
	  push_swap_rotate.c \
	  push_swap_reverse_rotate.c \

OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "$(NAME) executable created."

%.o: %.c $(HEADER)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@$(MAKE) clean -C $(LIBFT_DIR)
	@echo "OBJ removed"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all clean fclean re
