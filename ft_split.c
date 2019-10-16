/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:50:08 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/16 22:18:35 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_countword(char const *s, char c)
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

static int	ft_countletter(char const *s, char c)
{
	int		letter;
	
	letter = 0;
	while (s[letter] && s[letter] != c)
		letter++;
	return (letter);
}

/*
** EN CAS DE MALLOC QUI FAIL DANS LA BOUCLE IL FAUT FREE
** TOUS LES MALLOCS PRECEDENTS /!\ /!\ /!\
*/

char	**ft_split(char const *s, char c)
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
			return (NULL);
		ft_strncpy(tab[word], s, letter);
		tab[word][letter] = '\0';
		s = s + letter;
		word++;
	}
	return (tab);
}

/*
**	LE MAIN DEVRAIT FREE TAB /!\
*/

int		main(int ac, char **av)
{
	char	**tab;
	int		i;

	if (ac != 3)
		return (0);
	if (!(tab = ft_split(av[1], av[2][0])))
		return (0);
	i = 0;
	while (tab[i])
	{
		ft_putendl_fd(tab[i], 1);
		i++;
	}
	return (0);
}
