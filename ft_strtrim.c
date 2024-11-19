/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 03:08:30 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/19 18:55:30 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isit(char c, char const *set)
{
	if (set == NULL)
		return 0;
	while (*set != 0)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	o ;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	while (isit(*s1, set) == 1 && *s1 != 0)
		s1++;
	len = ft_strlen(s1);
	while (isit(s1[len - 1], set) == 1 && len > 0)
		len--;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	o = 0;
	while (o < len)
	{
		str[o] = s1[o];
		o++;
	}
	return (str);
}
