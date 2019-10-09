/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:25:55 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/09 13:37:39 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);	
}
