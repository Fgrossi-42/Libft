/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <fgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:50:16 by fgrossi           #+#    #+#             */
/*   Updated: 2022/04/29 16:53:18 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*dest;

	j = 0;
	i = start;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		dest = (char *)malloc(ft_strlen(s));
	else
		dest = (char *)malloc(len + 1);
	if (!s || !dest)
		return (0);
	while (i < ft_strlen(s) && j < len)
		dest[j++] = s[i++];
	dest[j] = '\0';
	return (dest);
}
