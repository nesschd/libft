/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:17:59 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/09 17:36:14 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	j = 0;
	if (dstsize <= srclen)
		return (dstsize);
	while (dst[i])
		i++;
	while (i + j < dstsize - 1 && src[j]0
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (srclen + dstlen);
}
