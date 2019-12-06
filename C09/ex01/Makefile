# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcapouil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/24 11:43:23 by rcapouil          #+#    #+#              #
#    Updated: 2019/06/26 19:35:59 by rcapouil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
SRCS		= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS		= ${SRCS:.c=.o}
HEADER		= includes
CFLAGS		= -Wextra -Werror -Wall

all : ${NAME}

.c.o :
		gcc ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

clean :
		rm -f ${OBJECTS}

fclean : clean
		rm -f ${NAME}

re : fclean all

${NAME} :	${OBJECTS}
	ar rc ${NAME} ${SRCS}


