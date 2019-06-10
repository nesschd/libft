/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:55:55 by nchahed           #+#    #+#             */
/*   Updated: 2019/06/10 18:49:50 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	char	*cast;
	size_t	i;

	if (!(ptr = malloc(size)))
		return (NULL);
	i = 0;
	cast = (char*)ptr;
	while (i < size)
	{
		cast[i] = 0;
		i++;
	}
	return (ptr);
}
