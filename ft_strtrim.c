/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:30:24 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 21:11:19 by tlamart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	ft_start(char const *s1, char const *set)
{
	int		i;
	size_t	start;

	i = 0;
	start = 0;
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
	return (start);
}

static size_t	ft_end(char const *s1, char const *set)
{
	int		i;
	size_t	end;

	i = 0;
	end = 0;
	while (s1[end] != '\0')
		end++;
	end--;
	i = 0;
	while (set[i] && end != 0)
	{
		if (s1[end] == set[i])
		{
			end--;
			i = 0;
		}
		else
			i++;
	}
	return (end);
}

static char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start < end)
	{
		if (!(str = (char *)malloc((end - start) + 2)))
			return (NULL);
		ft_strncpy(str, &s1[start], (end - start) + 1);
		str[end - start + 1] = '\0';
		return (str);
	}
	str = (char *)malloc(1);
	str[0] = '\0';
	return (str);
}
