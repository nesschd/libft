/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:46:42 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 14:24:19 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		len;
	void	*tab;

	len = count * size;
	if (!(tab = malloc(len)))
		return (NULL);
	ft_memset(tab, 0, len);
	return (tab);
}
