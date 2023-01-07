# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 23:44:14 by sbadr             #+#    #+#              #
#    Updated: 2023/01/07 17:17:02 by sbadr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
HEADER = push_swap.h
SRC = push_swap.c ft_atoi.c ft_split.c parsing.c functions.c functions2.c instructions01.c instructions02.c instructions03.c sort_5.c ft_strjoin.c ft_strdup.c ft_strcmp.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

debug: 
	@cc -g $(SRC)

$(NAME): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) $(SRC) -o push_swap


clean:
	@rm -rf $(OBJ) $(NAME)

re: clean all