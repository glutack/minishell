#include "../inc/minishell.h"

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

int main()
{
    char *input;
	char *token;

    printf ("Bienvenido a iminimishell!\n");
	while (1)
	{
    	input = readline("iminimishell> ");
		if (ft_strncmp(input, "exit()", 6) == 0)
			break;
		add_history(input);
		token = ft_strtok(input, " ");
		while (*token != '\0')
		{
			printf("token: %s\n", token);
			token = ft_strtok(NULL, " ");
		}
	}
    free(input);
    return 0;
}