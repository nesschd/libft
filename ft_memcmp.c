/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 03:17:27 by nchahed           #+#    #+#             */
/*   Updated: 2019/06/11 03:23:22 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n &&	((const unsigned char*)s1)[i]
		== ((const unsigned char*)s2)[i])
		i++;
	return (((const unsigned char*)s1)[i] - ((const unsigned char*)s2)[i]);
}
