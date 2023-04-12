/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:33:33 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/09 18:04:32 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (0);
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	i = 0;
	j = 0;
	if (str == 0)
		return (0);
	while (s1[j] != '\0')
	{
		str[j] = s1[j];
		j++;
	}
	while (s2[i] != '\0')
	{	
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j++] = '\0';
	return (str);
}
