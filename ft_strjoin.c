/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:51:26 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 22:45:39 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	else
	{
		ft_strlcpy(str, s1, len);
		ft_strlcat(str, s2, len + 1);
		str[len] = '\0';
		return (str);
	}
}
