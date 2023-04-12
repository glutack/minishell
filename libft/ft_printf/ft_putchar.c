/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:47:18 by irmoreno          #+#    #+#             */
/*   Updated: 2022/08/21 17:42:56 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

//%c 
//%% -> porcentaje
unsigned int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

//%s -> un string
unsigned int	ft_putstr(char *str)
{
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
		write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}
