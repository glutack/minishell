# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irmoreno <irmoreno@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 16:30:09 by irmoreno          #+#    #+#              #
#    Updated: 2023/02/13 17:49:31 by irmoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a
SRCS		= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
				ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
				ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c\
				ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
				ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
				ft_putendl_fd.c ft_putnbr_fd.c get_next_line.c ft_free_split.c\
				ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 
OBJS		= 	${SRCS:.c=.o}
CFLAGS		= 	-Wall -Wextra -Werror
RM			= 	rm -f

all: $(NAME)

%.o: %.c
	@gcc ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS} $(FT_PRINTF)
	@make -C ./ft_printf
	@gcc -c ${CFLAGS} ${SRCS}
	@ar crs ${NAME} ${OBJS}
	@echo "libft -> creada"

clean: 
	@make -C ./ft_printf clean
	@${RM} ${OBJS}
	@echo "libft -> objetos eliminados"

fclean: clean
	@make -C ./ft_printf fclean
	@${RM} ${NAME}
	@echo "libft -> eliminado"

re: fclean all
	@echo "libft :D"

.PHONY: all clean fclean re
