/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:05:07 by irmoreno          #+#    #+#             */
/*   Updated: 2022/09/20 16:36:50 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_new_save(char *save)
{
	unsigned int	i;
	unsigned int	j;
	char			*new_save;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	new_save = (char *)malloc(sizeof(char) * (ft_strlen(save) - i + 1));
	if (!new_save)
		return (NULL);
	i++;
	j = 0;
	while (save[i])
		new_save[j++] = save[i++];
	new_save[j] = '\0';
	free(save);
	return (new_save);
}

static char	*ft_gnlstrjoin(char *save, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!save)
	{
		save = (char *)malloc(1 * sizeof (char));
		save[0] = '\0';
	}
	str = malloc(sizeof(char) * ((ft_strlen(save) + ft_strlen(buff)) + 1));
	if (!save || !buff || str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (save[i] != '\0')
	{
		str[i] = save[i];
		i++;
	}
	while (buff[j] != '\0')
		str[i++] = buff [j++];
	str[ft_strlen(save) + ft_strlen(buff)] = '\0';
	free(save);
	return (str);
}

static char	*ft_read_fd(int fd, char *save)
{
	int		nbytes_read;
	char	*buff;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	nbytes_read = 1;
	while (!save || (!ft_strchr(save, '\n') && nbytes_read != 0))
	{
		nbytes_read = read(fd, buff, BUFFER_SIZE);
		if (nbytes_read == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[nbytes_read] = '\0';
		save = ft_gnlstrjoin(save, buff);
	}
	free(buff);
	return (save);
}

static char	*ft_extract_line(char *save)
{
	unsigned int	i;
	char			*line;

	i = 0;
	if (!save[i])
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (save[i] && save[i] != '\n')
	{
		line[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
	{
		line[i] = save[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char		*save[4096];
	char			*line;

	if (fd < 0 || fd > 4095 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(save[fd]);
		save[fd] = NULL;
		return (NULL);
	}
	save[fd] = ft_read_fd(fd, save[fd]);
	if (!save[fd])
		return (NULL);
	line = ft_extract_line(save[fd]);
	save[fd] = ft_new_save(save[fd]);
	return (line);
}
