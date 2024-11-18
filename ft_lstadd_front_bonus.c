/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 23:23:22 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/18 21:35:44 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst ;
	lst = &new ;
}

/*
int main ()
{
	char *str ;
	t_list	*hamza = ft_lstnew(str);
	t_list	*achraf = ft_lstnew(str);
	t_list	*ls1 = ft_lstnew (str);
	ls1->next = achraf;
	ft_lstadd_front (&ls1, NULL);
	printf("%p || %p", hamza->next, ls1);
}*/
