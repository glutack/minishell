#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/wait.h>
extern char	*env;
typedef struct s_args
{
	char	*str;
	struct s_args	*aux;
	struct s_args	*next;
}	t_args;