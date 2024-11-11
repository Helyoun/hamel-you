/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:30:40 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/11 21:24:02 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	i = ft_strlen (s);
	str = (char *)ft_calloc(i + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
