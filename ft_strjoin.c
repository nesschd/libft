/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:51:26 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/10 14:24:24 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;


	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	if (s1 == 0 || s2 == 0)
		return (NULL);
	else
	{
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
		str[len] = '\0';
		return(str);
	}
}

int		main(void)
{
	printf("%s\n", ft_strjoin("Hello", "thibal"));
}
