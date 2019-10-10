/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:30:24 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/10 15:41:45 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	if (s1 == 0)
		return (NULL);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	while (str[i] == (char)set)
		i++;
	if (str[i] != (char)set)
			ft_strcpy(&str[i], s1);
	str[len] = '\0';
	return (str);
}

int		main(void)
{
	printf("%s\n", ft_strtrim("hello", "h"));
}
