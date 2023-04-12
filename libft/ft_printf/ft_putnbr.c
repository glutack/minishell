/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:49:42 by irmoreno          #+#    #+#             */
/*   Updated: 2022/08/21 17:37:35 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

//%d -> num decimal
//%i -> int base 10
unsigned int	ft_putnbr(int n)
{
	long			nb;
	unsigned int	len;

	len = 0;
	nb = n;
	if (n < 0)
	{
		ft_putchar('-');
		len++;
		nb *= -1;
	}
	if (nb <= 9)
	{
		ft_putchar((nb + '0'));
		len++;
	}
	else
	{
		len += ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
		len++;
	}
	return (len);
}

//%u -> num decimal sin signo
unsigned int	ft_putnbru(unsigned long n)
{
	unsigned int	len;

	len = 0;
	if (n <= 9)
	{
		ft_putchar(n + '0');
		len++;
	}
	else
	{
		len += ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
		len++;
	}
	return (len);
}
