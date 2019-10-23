/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 03:17:27 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 11:46:59 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*cast1;
	const unsigned char *cast2;

	cast1 = (const unsigned char*)s1;
	cast2 = (const unsigned char*)s2;
	i = 0;
	while (i < n && cast1[i] == cast2[i])
		i++;
	if (cast1[i] > cast2[i])
		return (1);
	else if (cast1[i] < cast2[i])
		return (-1);
	else
		return (0);
}
