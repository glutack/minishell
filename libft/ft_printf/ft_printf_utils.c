/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:38:13 by irmoreno          #+#    #+#             */
/*   Updated: 2022/08/21 17:42:46 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{	
	unsigned int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
