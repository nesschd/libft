/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:14:15 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/09 16:06:52 by nchahed          ###   ########.fr       */
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
		if (ft_strncmp((char*)&haystack[i], needle, ft_strlen(needle)) == 0)
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	printf("%s\n", ft_strnstr("bonjour nchahed", "nchahed", 3));
	printf("%s\n", strnstr("bonjour nchahed", "nchahed",3));
	return (0);
}
