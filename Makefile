# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 02:26:38 by dlima-se          #+#    #+#              #
#    Updated: 2022/10/25 23:36:08 by dlima-se         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS	= ft_printf.c printf_numeric.c printf_alpha.c
OBJS	= $(SRCS:.c=.o)
CC			= gcc -c
CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS)
	ar -rcs ${NAME} ${OBJS}
	ar -t ${NAME}

${OBJS}:
	${CC} ${CFLAGS} ${@:.o=.c}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re