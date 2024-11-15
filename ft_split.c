/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:15:43 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/15 07:18:14 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_word(char *s, char c)
{
	size_t	w;

	w = 0;
	while (*s != 0)
	{
		if (*s != c && *(s + 1) == c)
			w++;
		s++ ;
	}
	return(w);
}

static	char	*ft_makestr(char **s, char c)
{
	size_t	i;
	char	*str;

	i = 0 ;
	while (*s[i] != c && *s[i] != 0)
		i++;
	str = (char *)ft_calloc(i, sizeof(char ));
	if (str == NULL)
		return (NULL);

	return (str);
}

char **ft_split(char const *s, char c)
{
	size_t	w;
	size_t	i;
	size_t	**strs;

	w = ft_count_word(s, c);
	strs = (char **)ft_calloc(w + 1, sizeof(char *));
	if (strs == NULL)
		return (NULL);
	while (*s != 0)
	{
		if (*s != c)
		{
			strs[i] = ft_makestr(&s, c);
			if (strs[i] == NULL)
				return(ft_freeall(strs, i));
			i++;
		}
		s++;
	}
	return (strs);
}
*/
int main (int c, char **av)
{
	printf("%s", ft_makestr(&av[1], av[2][0]));
}
