/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:41:19 by irmoreno          #+#    #+#             */
/*   Updated: 2022/08/21 17:23:56 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int				ft_printf(char const *arg, ...);
size_t			ft_strlen(const char *s);
unsigned int	ft_putchar(char c);
unsigned int	ft_putstr(char *str);
unsigned int	ft_putnbr(int n);
unsigned int	ft_putnbru(unsigned long n);
unsigned int	ft_puthex(const char *type, unsigned long n);
#endif
