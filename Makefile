#-------- push_swap --------#
NAME	=	minishell
SRC		=	src/main.c
OBJ		=	$(SRC:.c=.o)
CC		=	gcc -g

#--------- library ---------#
LIBFT	=	./libft/libft.a

#---------- other ----------#
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

#---------- rules ----------#

all: $(NAME) 

$(LIBFT):
	@make -C ./libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "objetos creados :D"

$(NAME): $(OBJ) $(LIBFT)
	@gcc -g $(CFLAGS) $(OBJ) -Llibft -lft -lreadline -o $(NAME)
	@echo "minishell creado :D"

clean:
	@$(RM) $(OBJ)
	@echo "objetos eliminados :D"

fclean: clean
	@$(RM) $(NAME)
	@echo "minishell eliminado :D"

re: fclean all

libclean:
	@make -C ./libft fclean
	@echo "librerías eliminadas :D"

.PHONY: all clean fclean re