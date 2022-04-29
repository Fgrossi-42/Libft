/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <fgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:32:20 by fgrossi           #+#    #+#             */
/*   Updated: 2022/04/29 16:53:18 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)malloc(count * size + 1);
	if (!dest)
		return (0);
	while ((count * size) >= i)
	{
		((unsigned char *)dest)[i] = '\0';
		i++;
	}
	return (dest);
}
