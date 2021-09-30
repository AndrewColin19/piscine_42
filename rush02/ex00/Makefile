# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 12:53:53 by acolin            #+#    #+#              #
#    Updated: 2021/09/26 20:36:50 by acolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRCS = srcs/main.c srcs/ft_aff.c srcs/ft_solve.c srcs/ft_split.c srcs/ft_atoi.c srcs/ft_solve2.c srcs/ft_strdup.c srcs/ft_split2.c srcs/ft_strlen.c srcs/ft_solve3.c
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: 
	gcc ${CFLAGS} -I includes ${SRCS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

