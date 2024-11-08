/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:45:07 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/07 21:45:36 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != 0)
	{
		if (i < dstsize - 1 && dstsize != 0)
			dst[i] = src[i];
		if (i == dstsize -1 && dstsize != 0)
			dst[i] = 0;
		i++;
	}
	if (src[i] == 0 && dstsize != 0)
		dst[i] = 0;
	return (i);
}
