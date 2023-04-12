/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:50:05 by irmoreno          #+#    #+#             */
/*   Updated: 2022/08/21 17:36:14 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

// hay conversión?
static int	ft_isconver(char conver, va_list arg_list)
{
	unsigned int	len;

	len = 0;
	if (conver == 'c')
		len = ft_putchar(va_arg(arg_list, int));
	else if (conver == 's')
		len = ft_putstr(va_arg(arg_list, char *));
	else if (conver == 'p')
	{
		len = ft_putstr("0x");
		len += ft_puthex("0123456789abcdef", va_arg(arg_list, unsigned long));
	}
	else if (conver == 'd' || conver == 'i')
		len = ft_putnbr(va_arg(arg_list, int));
	else if (conver == 'u')
		len = ft_putnbru(va_arg(arg_list, unsigned int));
	else if (conver == 'x')
		len += ft_puthex("0123456789abcdef", va_arg(arg_list, unsigned int));
	else if (conver == 'X')
		len += ft_puthex("0123456789ABCDEF", va_arg(arg_list, unsigned int));
	else if (conver == '%')
		len = ft_putchar('%');
	return (len);
}

// printf
int	ft_printf(char const *arg, ...)
{
	va_list			arg_list;
	unsigned int	i;
	unsigned int	len;

	va_start(arg_list, arg);
	i = -1;
	len = 0;
	while (arg[++i])
	{
		if (arg[i] == '%')
			len += ft_isconver(arg[++i], arg_list);
		else
			len += ft_putchar(arg[i]);
	}
	va_end(arg_list);
	return (len);
}
