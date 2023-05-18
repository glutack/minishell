#include "../inc/minishell.h"

// '$' isn't implemented yet
char	*ft_strtok(char *input, char *split)
{
	static char	*last_s;
	char		*curr_s;
	int			sinquotes;
	int			douquotes;

	sinquotes = -1;
	douquotes = -1;
	if (input != NULL)
		last_s = input;
	curr_s = last_s;
	while (*last_s != '\0')
	{
		if (*last_s == '\"' && douquotes == -1)
			sinquotes *= -1;
		else if (*last_s == '\'' && sinquotes == -1)
			douquotes *= -1;
		if (ft_strchr(split, *last_s) && sinquotes == -1 && douquotes == -1)
		{
			*last_s++ = '\0';
			return (curr_s);
		}
		last_s++;
	}
	return (curr_s);
}

void	ft_exec(char **str)
{
	char	*path;
	int		found;
	char	*tmp;
	char	*aux;
	pid_t	pid;
	char	*args[3];
	int		start;

	found = 0;
	start = 0;
	path = getenv("PATH");
	tmp = ft_strtok(path, ":");
	while (*tmp != '\0' && found == 0 && found != -1)
	{
		if (start != 0)
			tmp = ft_strtok(NULL, ":");
		if (*tmp == '\0')
			found = -1;
		start = 1;
		tmp = ft_strjoin(tmp, "/");
		aux = tmp;
		tmp = ft_strjoin(tmp, str[0]);
		free(aux);
		if (access(tmp, F_OK) == 0)
			found = 1;
		else
			free(tmp);
	}
	if (found == 1)
	{
		args[0] = tmp;
		if (str[1] != NULL)
			args[1] = str[1];
		args[2] = NULL;
		pid = fork();
		if (pid == 0)
			execve(tmp, args, NULL);
		else
			waitpid(pid, NULL, 0);
	}
	else
		printf("Command \"%s\" not found\n", str[0]);
}

int main()
{
    char	*input;
	char	*buff[50];
	int		i;

	i = 0;
    printf ("Bienvenido a iminimishell!\n");
	while (1)
	{
    	input = readline("iminimishell> ");
		if (ft_strncmp(input, "exit()", 6) == 0)
			break;
		add_history(input);
		buff[i] = ft_strtok(input, " ");
		while (*buff[i] != '\0')
		{
			i++;
			buff[i] = ft_strtok(NULL, " ");
		}
		ft_exec(buff);
		// liberar buff y input
		i = 0;
	}
    free(input);
    return 0;
}