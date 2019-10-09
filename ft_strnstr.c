/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:14:15 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/09 15:55:43 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle == 0 || ft_strlen(needle) == 0)
		return ((char*)haystack);
	if (ft_strlen(needle) > len)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char*)haystack, needle, ft_strlen(needle)) == 0)
			return ((char*)&needle[i]);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	printf("%s\n", ft_strnstr("bonjour nchahed", "nchahed", 42));
	printf("%s\n", strnstr("bonjour nchahed", "nchahed",42));
	return (0);
}
