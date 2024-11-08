/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:21:56 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/08 07:21:59 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	c ;
	char	*str ;

	if (start > len)
		start = len ;
	str = (char *)ft_calloc(len - start + 1, sizeof(char));
	if (str == NULL || s == NULL)
		return (NULL);
	c = 0 ;
	while (start + c < len)
	{
		str[c] = s[start + c] ;
		c++;
	}
	return (str);
}
