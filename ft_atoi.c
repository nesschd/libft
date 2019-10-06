/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nesschd <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 18:15:24 by nesschd           #+#    #+#             */
/*   Updated: 2019/10/06 19:34:57 by nesschd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int		i;
	int		a;
	int		signe;

	i = 0;
	signe = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '+' )
		i++;
	else if (str[i] == '-')
	{
		signe = -1;
		i++;
	}	
	a = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		a =  a * 10 + (str[i] - '0');
		i++;
	}
	return (a * signe);
}
