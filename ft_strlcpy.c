/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:25:55 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/09 16:15:04 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	int		i;

	srclen = ft_strlen(src);
	i = 0;

	if (dstsize == 0)
		return (srclen);
	while (src[i] && i < dstsize - 1)
	{	
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);	
}
