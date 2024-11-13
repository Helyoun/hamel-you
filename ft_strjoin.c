/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:22:13 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/13 02:40:56 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	if (s1 == NULL && s2 == NULL)
		return (NULL) ;
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	i = ft_strlen(s1);
	str = (char *) ft_calloc(i+ ft_strlen(s2) + 1, sizeof(char));
	i = 0 ;
	while (*s1 != 0)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while(*s2 != 0)
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	return (str);
}
