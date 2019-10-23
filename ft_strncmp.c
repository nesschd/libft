/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 17:40:39 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 13:52:53 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char *cast1;
	const unsigned char *cast2;

	cast1 = (const unsigned char *)s1;
	cast2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n && cast1[i])
	{
		if (cast1[i] > cast2[i])
			return (1);
		else if (cast1[i] < cast2[i])
			return (-1);
		i++;
	}
	return (0);
}
