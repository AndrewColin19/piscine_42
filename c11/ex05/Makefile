# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 11:35:56 by acolin            #+#    #+#              #
#    Updated: 2021/09/23 12:13:48 by acolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = srcs/ft_fonction.c srcs/main.c
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
