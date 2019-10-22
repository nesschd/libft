/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:14:24 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/22 09:44:36 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <ctype.h>

int		main(void)
{
	char	*test = "C'est parti pour une super correction de l'espace !";
	char	clibft[420];
	char	clibc[420];
/*
	ft_memset();
	memset();
	// check memset
	
	ft_bzero();
	bzero();
	// check bzero
	
	ft_memcpy();
	memcpy();
	// check memcpy
	
	ft_memccpy();
	memccpy();
	// check memcpy
	
	ft_memmove();
	memmove();
	// check memmove
	
	ft_memchr();
	memchr();
	// check memchr
*/	
	if (ft_memcmp("Super correction !!", "Quel super correcteur", 1) == memcmp("Super correction !!", "Quel super correcteur", 1))
		ft_putendl_fd("MEMCMP SUCCESS", 1);
	else
		ft_putendl_fd("MEMCMP FAIL", 2);
		
	if (ft_strlen("Super correction") == strlen("Super correction"))
		ft_putendl_fd("STRLEN SUCCESS", 1);
	else
		ft_putendl_fd("STRLEN FAIL", 2);

	if (ft_isalpha('B') == isalpha('B'))
		ft_putendl_fd("ISALPHA SUCCESS", 1);
	else
		ft_putendl_fd("ISALPHA FAIL", 2);
	
/*	
	ft_isdigit(); isdigit();
	// check isdigit;
	
	ft_isalnum(); isalnum();
	// check isalnum
	
	ft_isascii(); isascii();
	// check isascii
	
	ft_isprint(); isprint();
	// check isprint
	
	ft_toupper(); toupper();
	// check toupper
	
	ft_tolower(); tolower();
	// check tolower
*/	
	if (ft_strchr(test, 's') == strchr(test, 's'))
		ft_putendl_fd("STRCHR SUCCESS", 1);
	else
		ft_putendl_fd("STRCHR FAIL", 2);
/*
	
	ft_strrchr(); strrchr();
	// check strrchr
*/	
	if (ft_strncmp("Super correction !!", "Quel super correcteur", 10) == strncmp("Super correction !!", "Quel super correcteur", 10))
		ft_putendl_fd("STRNCMP SUCCESS", 1);
	else
		ft_putendl_fd("STRNCMP FAIL", 1);
	if (ft_strlcpy(clibft, "HELLO WORLD", 420) ==  strlcpy(clibc, "HELLO WORLD", 420))
	{
		if (!strcmp(clibft, clibc))
			ft_putendl_fd("STRLCPY SUCCESS", 1);
		else
			ft_putendl_fd("STRLCPY FAIL", 2);
	}
	else
		ft_putendl_fd("STRLCPY FAIL",2);
/*	
	
	ft_strlcat(); strlcat();
	// check strlcat
	
	ft_strnstr(); strnstr();
	// check strnstr
	
	ft_atoi(); atoi();
	// check atoi

	ft_calloc();
	calloc();
	// check calloc
	
	ft_strdup(); strdup();
	// check strdup
*/	
	return (0);
}
