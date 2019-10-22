/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 02:20:13 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/20 13:21:51 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char*)src)[i] != (unsigned char)c)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	if (((unsigned char*)src)[i] == (unsigned char)c)
	{
		((unsigned char*)dest)[i] = (unsigned char)c;
		return (dest + i + 1);
	}
	else
		return (NULL);
}
