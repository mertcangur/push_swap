# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 04:14:19 by mgur              #+#    #+#              #
#    Updated: 2023/01/09 04:14:21 by mgur             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
SRC		= main.c \
		check.c \
		const.c \
		do_movee.c \
		do_paa.c \
		do_ra.c \
		do_rra.c \
		do_sa.c \
		get_start.c \
		indexx.c \
		little_sort.c \
		position.c \
		sortt.c \
		stack.c  \
		ft_check_error.c \
		ft_split.c
SRCS	= $(SRC)
OBJS	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "\e[32m (＾▽＾) \e[0m\n";

%.o: %.c
	@ $(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@printf "\e[33m(￣▽￣) \e[0m\n"

fclean:
	@rm -rf $(OBJS)
	@rm -rf $(NAME)
	@printf "\e[31m( ￣＾￣) \e[0m\n"

re: fclean all

.PHONY: all clean fclean re
