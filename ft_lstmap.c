/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:47:46 by fgrossi           #+#    #+#             */
/*   Updated: 2022/01/19 14:22:18 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*node;
	t_list	*pol;

	if (lst)
	{
		pol = ft_lstnew(f(lst->content));
		if (!pol)
			return (NULL);
		lst = lst->next;
		while (lst)
		{
			node = ft_lstnew(f(lst->content));
			if (!node)
			{
				ft_lstclear(&pol, del);
				return (NULL);
			}
			ft_lstadd_back(&pol, node);
			lst = lst->next;
		}
		return (pol);
	}
	return (NULL);
}
