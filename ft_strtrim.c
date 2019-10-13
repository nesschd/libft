/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:30:24 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/13 15:09:14 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	int		i;
	char	*str;

	start = 0;
	i = 0;
	end = 0;
	while (set[i])
	{
		if (s1[start] == set[i])
		{
			start++;
			i = 0;
		}
		else
			i++;
	}
	printf("Start = %zu\n", start);
	while (s1[end] != '\0')
		end++;
	while (set[i])
	{
		if (s1[end] == set[i])
		{
			end--;
			i = 0;
		}
		else
			i++;
	}
	printf("End = %zu\n", end);
	if (!(str = (char *)malloc(end - start)))
		return (NULL);
	ft_strncpy(str, &s1[start], end - start);
	str[end - start] = '\0';
	return (str);
}

int		main(int ac, char **av)
{
	if (ac > 2)
		printf("%s\n", ft_strtrim(av[1], av[2]));
	return (0);
}
