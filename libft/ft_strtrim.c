/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:05:56 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/11 18:31:57 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux_s1;
	size_t	size;
	size_t	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	size = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (size && ft_strchr(set, s1[size - 1]))
		size--;
	aux_s1 = ft_substr(s1, i, size - i);
	return (aux_s1);
}
