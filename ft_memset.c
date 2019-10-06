/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:40:20 by nchahed           #+#    #+#             */
/*   Updated: 2019/06/10 18:46:40 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int	c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

