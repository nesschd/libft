/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 04:40:46 by nchahed           #+#    #+#             */
/*   Updated: 2019/06/11 04:55:01 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	
	i = 0;
	while (s[i] && s[i]!= c)
		i++;
	if (s[i] == c)
		return ((char*)s + i);
	else
		return (NULL);
}
