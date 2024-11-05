# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agulanus <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 14:45:40 by agulanus          #+#    #+#              #
#    Updated: 2024/11/03 00:46:00 by agulanus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush02

CC = cc
CCFLAGS = -Wall -Wextra -Werror -g #TODO remove -g flag before evaluation

RM = rm -rf

INCLUDES = includes/rush02.h

UTILS = $(wildcard utils/*.c)

SRCS = $(wildcard src/*.c) $(UTILS)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(INCLUDES)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
