/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:43:42 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/10 13:43:37 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if(!(str = (char *)malloc(len)))
		return (NULL);
	if (s == 0)
		return (NULL);
	ft_strncpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}

int		main(void)
{
	char const	*s = "Hello nchahed\n";
	unsigned int start = 2;
	size_t len = 10;
	printf("Nouvelle chaine : %s\n", ft_substr("Hello nchahed\n", 0, -1));
	return (0);
}
