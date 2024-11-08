/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:22:13 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/08 07:22:36 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i ;
	char	*str;

	str = (char *) ft_calloc(ft_strlen(s1) + ft_strlen(s2), sizeof(char));
	i = ft_strlcpy (str, s1, ft_strlen(s1) + 1);
	i = ft_strlcat (str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (str);
}
