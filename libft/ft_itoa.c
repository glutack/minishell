/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:46:44 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/18 12:07:05 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nlen(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		sizen;
	long	aux_n;

	aux_n = (long)n;
	sizen = ft_nlen(n);
	result = malloc((sizen + 1) * sizeof(char));
	if (!result)
		return (0);
	result[sizen] = '\0';
	if (aux_n < 0)
	{
		result[0] = '-';
		aux_n *= -1;
	}
	else if (aux_n == 0)
		result[0] = '0';
	while (aux_n != 0)
	{
		sizen--;
		result[sizen] = aux_n % 10 + '0';
		aux_n = aux_n / 10;
	}
	return (result);
}
