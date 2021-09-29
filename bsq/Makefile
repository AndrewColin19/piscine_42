# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 12:53:53 by acolin            #+#    #+#              #
#    Updated: 2021/09/29 18:57:29 by acolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = srcs/main.c srcs/ft_aff.c srcs/ft_split.c srcs/ft_file.c srcs/ft_strlen.c srcs/ft_atoi.c srcs/ft_tablen.c srcs/ft_print_dashbord.c srcs/ft_char.c srcs/ft_solve.c srcs/ft_set_point.c
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

.PHONY: all clean fclean 
