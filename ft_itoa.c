/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:27:53 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 13:49:33 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(int nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		len = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		i;

	len = ft_count(n);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	str[len] = '\0';
	i = 0;
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[i] = '-';
		i++;
		n = -n;
	}
	while (n > 0)
	{
		str[len - 1] = n % 10 + '0';
		len--;
		n = n / 10;
	}
	return (str);
}
