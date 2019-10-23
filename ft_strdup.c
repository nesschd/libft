/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 03:34:18 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 14:38:25 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s);
	if (!(dest = (char*)malloc(len + 1)))
		return (NULL);
	ft_strlcpy(dest, s, len + 1);
	return (dest);
}
