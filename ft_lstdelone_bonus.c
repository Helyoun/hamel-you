/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:42:18 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/19 01:45:59 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (*lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		free(*lst);
		del ((void *)lst->next);
		*lst = lst->next;
	}
}
