/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:50:08 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 20:55:08 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_countword(char const *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

static int		ft_countletter(char const *s, char c)
{
	int		letter;

	letter = 0;
	while (s[letter] && s[letter] != c)
		letter++;
	return (letter);
}

static char		**ft_tabfree(char **tab, int word)
{
	word = 0;
	while (tab[word])
	{
		free(tab[word]);
		word++;
	}
	free(tab);
	return (NULL);
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
char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		word;
	int		letter;

	word = ft_countword(s, c);
	if (!(tab = (char **)malloc((word + 1) * sizeof(char *))))
		return (NULL);
	tab[word] = NULL;
	word = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			return (tab);
		letter = ft_countletter(s, c);
		if (!(tab[word] = (char *)malloc((letter + 1) * sizeof(char))))
			return (ft_tabfree(tab, word));
		ft_strncpy(tab[word], s, letter);
		tab[word][letter] = '\0';
		s = s + letter;
		word++;
	}
	return (tab);
}
