/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:50:08 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/16 16:38:07 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_countword(char const *s, char c)
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

int		ft_countletter(
{

	int		i;

}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		word;
	
	if(!(tab = (char *)malloc(ft_countword(word) * sizeof (char *)))
			return (NULL);
	
}

int	main(int ac, char **av)
{
	if (ac > 2)
		printf("Nombre de mots = %d\n", ft_countwords(av[1], av[2][0]));
	return (0);
}
