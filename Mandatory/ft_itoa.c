/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <fgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:56:51 by fgrossi           #+#    #+#             */
/*   Updated: 2022/04/29 16:53:18 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

int	oversize(int nb, int lenght, char *str)
{
	str[lenght--] = '8';
	return (nb / 10);
}

void	translate(int i, int nb, char *str)
{
	while (nb > 0)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
}

int	length(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	int		i;
	char	*str;

	i = length(nb);
	str = (char *) malloc(i + 1);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		if (nb == -2147483648)
		{
			nb = oversize(nb, i, str);
			i--;
		}
		nb *= -1;
	}
	translate(i, nb, str);
	return (str);
}
