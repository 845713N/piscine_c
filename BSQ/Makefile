# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adpillia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/16 11:51:11 by adpillia          #+#    #+#              #
#    Updated: 2020/07/23 08:19:52 by adpillia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSQ

SRCS = ./srcs/ft_analyse_input.c ./srcs/ft_display_map.c ./srcs/ft_error.c ./srcs/ft_import_file.c ./srcs/ft_small_functions.c ./srcs/ft_square.c ./srcs/main.c ./srcs/test_function.c

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror -o $(NAME)

INCLUDES = ./includes

.c.o:
	cc $(FLAGS) -I $(INCLUDES) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cc $(FLAGS) -I $(INCLUDES) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
