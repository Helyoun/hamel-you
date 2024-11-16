/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:15:43 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/16 08:15:14 by hamel-yo         ###   ########.fr       */
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
	while ((*s)[i] != c && (*s)[i] != 0)
		i++;
	str = (char *)ft_calloc(i + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (**s != 0 && **s != c)
	{
		str[i] = **s;
		i++;
		(*s)++;
	}
	return (str);
}

static	void	*ft_free(char **strs, size_t i)
{
	while(i >= 0)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	size_t	w;
	size_t	i;
	char	**strs;

	if (s == NULL)
		return (NULL);
	w = ft_count_word((char *)s, c);
	strs = (char **)ft_calloc(w + 1, sizeof(char *));
	if (strs == NULL)
		return (NULL);
	i = 0;
	while (*s != 0)
	{
		if (*s != c)
		{
			strs[i] = ft_makestr((char **)&s, c);
			if (strs[i] == NULL)
				return (ft_free(strs, i));
			i++;
		}
		if (*s != 0)
			s++;
	}
	return (strs);
}
/*
int main (int c, char **av)
{
	char  **str =  ft_split(av[1], 'c');
	int i = 0;
	printf("%p", str);
	//for (int i=0 ; str[i];i++)
	//	puts(str[i]);
	//while (i <= ft_count_word("hello wold", av[1][0]))
	//{
	//	printf("%s\n", str[i]);
	//	i++;
	//}
}*/
