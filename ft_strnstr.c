/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:06:03 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/11 22:04:14 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nl;

	i = 0;
	nl = ft_strlen(needle);
	while (len - nl > i || haystack[i] != 0)
	{
		if (ft_strncmp((char *)(haystack + i), (char *)(needle), nl) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
