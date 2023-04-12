/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:49:10 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/03 17:07:02 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = ft_strlen(dst);
	if (dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	while (src[j] && dstsize > i + 1)
		dst[i++] = src[j++];
	dst[i++] = '\0';
	return (size + ft_strlen(src));
}
