/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamel-yo <hamel-yo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:42:18 by hamel-yo          #+#    #+#             */
/*   Updated: 2024/11/19 21:24:12 by hamel-yo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (*lst == NULL || del == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		free(*lst);
		del ((void *)lst->next);
		*lst = lst->next;
	}
}
