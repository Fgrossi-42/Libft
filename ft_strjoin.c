/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:09:31 by fgrossi           #+#    #+#             */
/*   Updated: 2022/01/17 15:46:09 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	dest = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!dest)
		return (0);
	while (s1[i] != '\0')
	{
		dest[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
		dest[j++] = s2[i++];
	dest[j] = '\0';
	return (dest);
}
