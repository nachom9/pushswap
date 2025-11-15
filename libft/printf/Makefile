# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/30 15:58:18 by imelero-          #+#    #+#              #
#    Updated: 2025/11/03 12:52:39 by imelero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAG = -Wall -Wextra -Werror

HEADER = Makefile ft_printf.h

SRC = ft_printf.c \
	ft_printf_utils.c \
	ft_printf_utils_extra.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo "$(NAME) created"

%.o: %.c $(HEADER)
	@cc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ removed"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all clean fclean re
