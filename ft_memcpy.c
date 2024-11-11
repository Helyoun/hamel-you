/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:25:25 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/11 21:55:27 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n > 0)
	{
		((unsigned char *)dst)[n - 1] = ((unsigned char *)src)[n - 1];
		n--;
	}
	return (dst);
}
