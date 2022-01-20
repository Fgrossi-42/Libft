/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:33:25 by fgrossi           #+#    #+#             */
/*   Updated: 2022/01/19 14:24:06 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		new = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = new;
	}
}
