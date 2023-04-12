/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:49:12 by irmoreno          #+#    #+#             */
/*   Updated: 2022/06/02 19:01:04 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_strings(char const *s, char c)
{
	int	num;

	num = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			num++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (num);
}

char	**ft_free(char **ptr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

static char	*ft_create_strings(char const *s, char c)
{
	char				*strings;
	unsigned int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	strings = (char *)malloc(sizeof(char) * (i + 1));
	if (!strings)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		strings[i] = s[i];
		i++;
	}
	strings[i] = '\0';
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char			**result;
	unsigned int	i;

	if (!s)
		return (0);
	result = (char **)malloc((ft_count_strings(s, c) + 1) * sizeof(char *));
	if (!result)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			result[i] = ft_create_strings(s, c);
			if (result[i] == 0)
				return (ft_free(result, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}
