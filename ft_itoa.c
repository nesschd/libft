/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:27:53 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 22:33:01 by tlamart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(int nb)
{
	size_t	len;
	long	a;

	a = nb;
	len = 0;
	if (a == 0)
		return (1);
	if (a < 0)
	{
		len = 1;
		a = -a;
	}
	while (a > 0)
	{
		a = a / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		i;
	long	a;

	a = n;
	len = ft_count(n);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	str[len] = '\0';
	i = 0;
	if (a == 0)
		str[0] = '0';
	else if (a < 0)
	{
		str[i] = '-';
		i++;
		a = -a;
	}
	while (a > 0)
	{
		str[len - 1] = a % 10 + '0';
		len--;
		a = a / 10;
	}
	return (str);
}
