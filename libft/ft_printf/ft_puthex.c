/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:20:12 by irmoreno          #+#    #+#             */
/*   Updated: 2022/08/21 17:41:22 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

unsigned int	ft_puthex(const char *type, unsigned long n)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_puthex(type, n / 16);
		len += ft_puthex(type, n % 16);
	}
	else
	{
		ft_putchar(type[n]);
		len++;
	}
	return (len);
}
