/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:56:35 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/18 13:19:56 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*aux_s;
	unsigned int	slen;

	if (!s)
		return (0);
	i = 0;
	aux_s = malloc((ft_strlen(s) + 1) * sizeof(char));
	slen = ft_strlen(s);
	if (!aux_s)
		return (0);
	while (i < slen)
	{
		aux_s[i] = f(i, s[i]);
		i++;
	}
	aux_s[i] = '\0';
	return (aux_s);
}
