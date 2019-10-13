/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:43:42 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/13 12:44:24 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start <= ft_strlen(s))
	{
		if (!(str = (char *)malloc(len + 1)))
			return (NULL);
		ft_strncpy(str, s + start, len);
		str[len] = '\0';
		return (str);
	}
	return (NULL);
}
