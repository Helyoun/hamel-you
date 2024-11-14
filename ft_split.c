/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:27:19 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/14 04:00:24 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char *s, char c)
{
	int	cw;

	cw = 0;
	if (s == NULL)
		return (0);
	while (*s != 0)
	{
		if (*s != c && *(s + 1) == c)
			cw++;
		s++;
	}
	return (cw) ;
}

static char *ft_storin(char *s, char c, int *i)
{
	int l;
	int	j;
	char *str;

	j = 0;
	l = *i;
	while (s[l] != c && s[l] != 0)
		l++;
	str = (char *) ft_calloc((l - (*i)) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while ((*i) < l)
	{
		str[j] = s[(*i)];
		*i = (*i) + 1;
		j++;
	}
	return (str);
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		cw;
	int		w;
	char	**str;

	cw = ft_countword((char *)s, c);
	w = 0;
	str = (char **) ft_calloc(cw + 1, sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			str[w] = ft_storin((char *)s, c, &i);
			w++;
		}
		i++;
	}
	return (str);
}
