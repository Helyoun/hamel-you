/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 03:08:30 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/09 03:23:51 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isit(char c, char const *set)
{
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
	size_t	i;
	size_t	len;
	size_t	o ;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	o = 0;
	len = ft_strlen(s1);
	while (isit(s1[i], set) == 1)
		i++;
	while (isit(s1[len - 1], set) == 1)
		len--;
	str = (char *)ft_calloc(len - i + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len )
	{
		str[o] = s1[i];
		i++;
		o++;
	}
	return (str);
}
