# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaubert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/18 12:23:33 by eaubert           #+#    #+#              #
#    Updated: 2020/07/19 19:54:15 by eaubert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= rush-02

CC 		= cc

CFLAGS 	= -Wall -Werror -Wextra

SRCS 	= $(wildcard *.c)
OBJS 	= ${SRCS:.c=.o}

RM		= rm

all: 		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): 	${OBJS}
		
			${CC} -o ${NAME} ${OBJS}

clean: 
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
