/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 23:23:22 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/13 23:46:10 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst ;
	*lst-> = new ;
}


int main ()
{
	char str ;
	t_list	*hamza = ft_lstnew(&str);
	t_list	*achraf = ft_lstnew(&str);

	hamza->next = achraf;
	printf("%p || %p", hamza->content, achraf->content);
}
