/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:21:05 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/20 11:18:51 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] && i <= (len - ft_strlen(needle)))
	{
		if (ft_strlen(needle) > len)
			return (0);
		else if (!ft_strncmp(&haystack[i], needle, ft_strlen(needle)))
			return ((char *)&haystack[i]);
		i++;
	}	
	return (0);
}
