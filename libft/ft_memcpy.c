/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:13:45 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/03 17:19:42 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*aux_dst;
	unsigned char	*aux_src;
	size_t			i;

	aux_dst = (unsigned char *)dst;
	aux_src = (unsigned char *)src;
	i = 0;
	if (dst == src || !n)
		return (dst);
	while (i < n)
	{
		*(aux_dst + i) = *(aux_src + i);
		i++;
	}
	return (dst);
}
