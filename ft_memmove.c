/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 02:46:26 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/09 17:48:31 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (dest > src)
		{
			((char*)dest)[n - 1] = ((char*)src)[n - 1];
			n--;
		}
		else
		{
			((char*)dest)[i] = ((char*)src)[i];
			i++;
		}
	}
	return (dest);
}
