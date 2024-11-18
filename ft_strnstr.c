/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:06:03 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/18 22:35:53 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nl;

	i = 0;
	nl = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char *)haystack);
	if (len >= nl)
	{
		while (i + nl < len && haystack[i] != 0)
		{
			if (ft_strncmp((char *)(haystack + i), (char *)(needle), nl) == 0)
				return ((char *)(haystack + i));
			i++;
		}
	}
	return (NULL);
}
