/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:05:03 by irmoreno          #+#    #+#             */
/*   Updated: 2022/05/11 18:49:33 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*substr;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (slen <= start)
	{
		substr = (char *)malloc(sizeof(char));
		*substr = 0;
		return (substr);
	}
	while (slen - start < len)
		len = slen - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}
