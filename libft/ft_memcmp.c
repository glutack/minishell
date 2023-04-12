/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:58:10 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/03 17:21:45 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*aux_s1;
	const char	*aux_s2;

	i = 0;
	aux_s1 = (const char *) s1;
	aux_s2 = (const char *) s2;
	while (i < n)
	{
		if (aux_s1[i] != aux_s2[i])
			return ((unsigned char)aux_s1[i] - (unsigned char)aux_s2[i]);
		i++;
	}
	return (0);
}
