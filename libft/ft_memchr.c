/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:38:30 by irmoreno          #+#    #+#             */
/*   Updated: 2022/04/29 13:11:35 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*aux_s;

	aux_s = (const unsigned char *)s;
	while (n--)
	{
		if (*aux_s == (unsigned char)c)
			return ((void *)aux_s);
		aux_s++;
	}
	return (0);
}
