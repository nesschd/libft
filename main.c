/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:14:24 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 13:44:58 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <ctype.h>

int		main(void)
{
	char	*test = "C'est parti pour une super correction de l'espace !";
	char	*test1 = "C'est parti pour une super correction de l'espace !";
	char	clibft[420];
	char	clibc[420];
	char	*strc;
	char	*strft;
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
*/
	ft_putendl_fd("Test de memchr :", 1);
	if (ft_memchr(test, 'c', 42) == memchr(test, 'c', 42))
		ft_putendl_fd("MEMCHR SUCCESS", 1);
	else
		ft_putendl_fd("MEMCHR FAIL", 2);
	if (ft_memchr(test, 'z', 0) == memchr(test, 'z', 0))
		ft_putendl_fd("MEMCHR SUCCESS", 1);
	else
		ft_putendl_fd("MEMCHR FAIL", 2);
	
	ft_putendl_fd("Tests de memcmp :", 1);
	if (ft_memcmp("Super correction !!", "Quel super correcteur", 1) == memcmp("Super correction !!", "Quel super correcteur", 1))
		ft_putendl_fd("MEMCMP SUCCESS", 1);
	else
		ft_putendl_fd("MEMCMP FAIL", 2);
	if (ft_memcmp(" ", "Correction excellente", 0) == memcmp(" ", "Correction excellente", 0))
		ft_putendl_fd("MEMCMP SUCCESS", 1);
	else
		ft_putendl_fd("MEMCMP FAIL", 2);

	ft_putendl_fd("Tests de strlen :", 1);
	if (ft_strlen("Super correction") == strlen("Super correction"))
		ft_putendl_fd("STRLEN SUCCESS", 1);
	else
		ft_putendl_fd("STRLEN FAIL", 2);
	if (ft_strlen("   .") == strlen("   ."))
		ft_putendl_fd("STRLEN SUCCESS", 1);
	else
		ft_putendl_fd("STRLEN FAIL", 2);

	ft_putendl_fd("Tests de isalpha :", 1);
	if (ft_isalpha('B') == isalpha('B'))
		ft_putendl_fd("ISALPHA SUCCESS", 1);
	if (ft_isalpha(0) == isalpha (0))
		ft_putendl_fd("ISALPHA SUCCESS", 1);
	else
		ft_putendl_fd("ISALPHA FAIL", 2);
	
	ft_putendl_fd("Tests de isdigit :", 1);
	if (ft_isdigit('c') == isdigit('c'))
		ft_putendl_fd("ISDIGIT SUCCESS", 1);
	if (ft_isdigit(0) == isdigit(0))
		ft_putendl_fd("ISDIGIT SUCCESS", 1);
	else
		ft_putendl_fd("ISDIGIT FAIL", 2);
	
	ft_putendl_fd("Tests de isalnum :", 1);
	if (ft_isalnum(42) == isalnum(42))
		ft_putendl_fd("ISALNUM SUCCESS", 1);
	else
		ft_putendl_fd("ISALNUM FAIL", 1);
	if (ft_isalnum('N') == isalnum('N'))
		ft_putendl_fd("ISALNUM SUCCESS", 1);
	else
		ft_putendl_fd("ISALNUM FAIL", 2);
	
	ft_putendl_fd("Tests de isascii :", 1);
	if (ft_isascii('n') == isascii('n'))
		ft_putendl_fd("ISASCII SUCCESS", 1);
	else
		ft_putendl_fd("ISASCII FAIL", 2);
	
	ft_putendl_fd("Tests de isprint :", 1);
	if (ft_isprint('n') == isprint('n'))
		ft_putendl_fd("ISPRINT SUCCESS", 1);
	else
		ft_putendl_fd("ISPRINT FAIL", 2);

	ft_putendl_fd("Tests de toupper :", 1);
	if (ft_toupper(0) == toupper(0))
		ft_putendl_fd("TOUPPER SUCCESS", 1);
	else
		ft_putendl_fd("TOUPPER FAIL", 2);
	
	ft_putendl_fd("Tests de tolower :", 1);
	if (ft_tolower(0) == tolower(0))
		ft_putendl_fd("TOLOWER SUCCESS", 1);
	else
		ft_putendl_fd("TOLOWER FAIL", 2);
	
	ft_putendl_fd("Tests de strchr :", 1);
	if (ft_strchr(test, 's') == strchr(test, 's'))
		ft_putendl_fd("STRCHR SUCCESS", 1);
	else
		ft_putendl_fd("STRCHR FAIL", 2);
	
	ft_putendl_fd("Tests de strrchr :", 1);
	if (ft_strrchr(test, 's') == strrchr(test, 's'))
		ft_putendl_fd("STRRCHR SUCCESS", 1);
	else
		ft_putendl_fd("STRCHR FAIL", 2);

	ft_putendl_fd("Tests de strncmp :", 1);
	if (ft_strncmp("Super correction !!", "Quel super correcteur", 10) == strncmp("Super correction !!", "Quel super correcteur", 10))
		ft_putendl_fd("STRNCMP SUCCESS", 1);
	else
		ft_putendl_fd("STRNCMP FAIL", 1);
	
	ft_putendl_fd("Tests de strlcpy", 1);
	if (ft_strlcpy(clibft, "HELLO WORLD", 420) ==  strlcpy(clibc, "HELLO WORLD", 420))
	{
		if (!strcmp(clibft, clibc))
			ft_putendl_fd("STRLCPY SUCCESS", 1);
		else
			ft_putendl_fd("STRLCPY FAIL", 2);
	}
	else
		ft_putendl_fd("STRLCPY FAIL",2);
	
	ft_putendl_fd("Tests de strlcat :", 1);
	if (ft_strlcat(clibft, "HELLO WORLD", 420) == strlcat(clibc, "HELLO WORLD", 420))
	{
		if (!strcmp(clibft, clibc))
			ft_putendl_fd("STRLCAT SUCCESS", 1);
		else 
			ft_putendl_fd("STRLCAT FAIL", 2);
	}
	else
		ft_putendl_fd ("STRLCAT FAIL", 2);
	
	ft_putendl_fd("Tests de strnstr :", 1);
	if (ft_strnstr(test, "c", 50) == strnstr(test, "c", 50))
		ft_putendl_fd("STRNSTR SUCCESS", 1);
	else
		ft_putendl_fd("STRNSTR FAIL", 2);
	
	ft_putendl_fd("Tests d'atoi :", 1);	
	if (ft_atoi("Une super correction !!") == atoi("Une super correction !!"))
		ft_putendl_fd("ATOI SUCCESS", 1);
	else
		ft_putendl_fd("ATOI FAIL", 2);

/*	
 
	ft_putendl_fd("Tests de calloc :", 1);
	ft_calloc();
	calloc();
	// check calloc

*/	
/*

 	ft_putendl_fd("Tests de strdup :", 1);
 	if ((strft = ft_strdup(test)) == (strc = strdup(test)))
	{	
		if(!strcmp(strft, strc))
			ft_putendl_fd("STRDUP SUCCESS", 1);
		else
			ft_putendl_fd("STRDUP FAIL", 2);
	}
	else
		ft_putendl_fd("STRDUP FAIL", 2);
*/
	return (0);
}
