/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:21:56 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/20 00:30:27 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	if (s == NULL)
		return (NULL);
	if (start >= len)
		return (ft_strdup(""));
	i = 0;
	while ((size_t)(i + start) < len && s[i] != 0)
		i++;
	str = ft_calloc(i + 1, sizeof (char));
	if (str == NULL)
		return (NULL);
	while ((size_t)start != len && s[start] != 0)
	{
		str[i] = s[start] ;
		i++;
		start++;
	}
	return (str);
}
/*
int main(int ac, char **av)
{
	printf("%s", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
}*/
