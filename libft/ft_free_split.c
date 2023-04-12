/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:23:49 by irmoreno          #+#    #+#             */
/*   Updated: 2023/02/10 12:23:50 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_split(char **ptr)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (ptr[s] != NULL)
		s++;
	while (i < s)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}
