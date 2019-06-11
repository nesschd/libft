/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 03:09:56 by nchahed           #+#    #+#             */
/*   Updated: 2019/06/11 03:53:30 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n && ((const unsigned char*)s)[i] != (unsigned char)c)
		i++;
	if (((const unsigned char*)s)[i] == (unsigned char)c)
		return ((void*)s + i);
	else
		return (NULL);
}
