/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:46:42 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/09 11:07:03 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		len;
	char	*tab;

	len = count * size;
	if (!(tab = malloc(len))
		return (NULL);
	ft_memset(tab, 0, len);
	return (tab);
	
}
