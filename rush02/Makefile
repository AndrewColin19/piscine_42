# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 12:53:53 by acolin            #+#    #+#              #
#    Updated: 2021/09/25 16:30:40 by acolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRCS = srcs/main.c srcs/aff.c srcs/search_dict.c srcs/ft_split.c srcs/ft_atoi.c
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

