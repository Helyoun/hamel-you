/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:21:56 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/20 21:14:29 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ls;
	char	*str;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	ls = len ;
	if (start + len > ft_strlen(s))
		ls = ft_strlen(s);
	str = ft_calloc(ls + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ls = 0;
	while (ls < len && s[start + ls] != 0)
	{
		str[ls] = s[start + ls];
		ls++;
	}
	return (str);
}
