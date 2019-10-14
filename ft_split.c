/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:50:08 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/14 15:11:43 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			word++;
			i++;
		}
		else 
			i++;
	}
	return (word);
}

int	main(int ac, char **av)
{
	if (ac > 2)
		printf("Nombre de mots = %d\n", ft_countwords(av[1], av[2]));
	return (0);
}
