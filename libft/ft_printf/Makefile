# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 15:15:13 by irmoreno          #+#    #+#              #
#    Updated: 2022/08/21 15:17:44 by irmoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
SRCS	=	ft_printf.c ft_printf_utils.c ft_putchar.c ft_putnbr.c ft_puthex.c
OBJS	=	${SRCS:.c=.o}
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf
CC		=	gcc

all: $(NAME)

%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS} 
	@${CC} -c ${CFLAGS} ${SRCS}
	@ar crs ${NAME} ${OBJS}
	@echo "ft_printf -> creado"

clean: 
	@${RM} ${OBJS}
	@echo "ft_printf -> objetos eliminados"

fclean: clean
	@${RM} ${NAME}
	@echo "ft_printf -> eliminado"

re: fclean all
	@echo "ft_printf :D"

.PHONY: all clean fclean re
