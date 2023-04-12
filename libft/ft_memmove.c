/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:12:46 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/04 16:14:48 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*aux_dst;
	const char	*aux_src;
	char		*last_dst;
	const char	*last_src;

	if (!src && !dst)
		return (0);
	aux_dst = (char *)dst;
	aux_src = src;
	last_dst = aux_dst + (len - 1);
	last_src = aux_src + (len - 1);
	if (aux_dst < aux_src)
		while (len--)
			*aux_dst++ = *aux_src++;
	else
	{
		while (len--)
			*last_dst-- = *last_src--;
	}
	return (dst);
}
