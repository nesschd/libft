/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:14:24 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 23:57:08 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <ctype.h>

int		ft_loop(char *libft, char *libc)
{
	int		i;

	i = 0;
	while (i < 420 && libft[i] == libc[i])
		i++;
	return (i == 420);
}

int		main(void)
{
	char	*test = "C'est parti pour une super correction de l'espace !";
	char	*test1 = "";
	char	*libft;
	char	*libc;
	char	clibft[420];
	char	clibc[420];
	char	*dup;
	void	*ptr;
	void	*ftptr;

	libft = malloc(420);
	libc = malloc(420);

	ft_putendl_fd("Tests memset :", 1);
	ft_memset(libft, 42, 420);
	memset(libc, 42, 420);
	if (ft_loop(libft, libc))
		ft_putstr_fd("MEMSET success\n", 1);
	else
		ft_putstr_fd("MEMSET FAIL\n", 2);
	ft_memset(libft, -5, 10);
	memset(libc, -5, 10);
	if (ft_loop(libft, libc))
		ft_putstr_fd("MEMSET success\n", 1);
	else
		ft_putstr_fd("MEMSET FAIL\n", 2);
	ft_memset(libft, 99, 0);
	memset(libc, 99, 0);
	if (ft_loop(libft, libc))
		ft_putstr_fd("MEMSET success\n", 1);
	else
		ft_putstr_fd("MEMSET FAIL\n", 2);

	ft_putendl_fd("Test bzero :", 1);
	ft_bzero(libft, 99);
	bzero(libc, 99);
	if (ft_loop(libft, libc))
		ft_putstr_fd("BZERO success\n", 1);
	else
		ft_putstr_fd("BZERO FAIL\n", 2);
	ft_bzero(libft, 420);
	bzero(libc, 420);
	if (ft_loop(libft, libc))
		ft_putstr_fd("BZERO success\n", 1);
	else
		ft_putstr_fd("BZERO FAIL\n", 2);

	ft_putendl_fd("Tests memcpy :", 1);
	ft_memcpy(libft, "SUPER MAIN DE TEST !!", 22);
	memcpy(libc, "SUPER MAIN DE TEST !!", 22);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMCPY success", 1);
	else
		ft_putendl_fd("MEMCPY FAIL", 2);
	ft_memcpy(libft, "CORRECTEUR AU TOP", 3);
	memcpy(libc, "CORRECTEUR AU TOP", 3);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMCPY success", 1);
	else
		ft_putendl_fd("MEMCPY FAIL", 2);
	
	ft_putendl_fd("Tests memccpy :", 1);
	ft_memccpy(libft, "SUPER MAIN DE TEST !!", 5, 22);
	memccpy(libc, "SUPER MAIN DE TEST !!", 5, 22);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMCCPY success", 1);
	else
		ft_putendl_fd("MEMCCPY FAIL", 1);
	ft_memccpy(libft, "CORRECTEUR AU TOP", 1, 3);
	memccpy(libc, "CORRECTEUR AU TOP", 1, 3);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMCCPY success", 1);
	else
		ft_putendl_fd("MEMCCPY FAIL", 2);

	ft_putendl_fd("Tests memmove :", 1);
	ft_memmove(libft, libft + 10, 42);
	memmove(libc, libc + 10, 42);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMMOVE success", 1);
	else
		ft_putendl_fd("MEMMOVE FAIL", 2);
	ft_memmove(libft + 42, libft, 42);
	memmove(libc + 42, libc, 42);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMMOVE success", 1);
	else
		ft_putendl_fd("MEMMOVE FAIL", 2);

	ft_putendl_fd("Tests memchr :", 1);
	ft_putendl_fd("Test de memchr :", 1);
	if (ft_memchr(test, 'c', 42) == memchr(test, 'c', 42))
		ft_putendl_fd("MEMCHR success", 1);
	else
		ft_putendl_fd("MEMCHR FAIL", 2);
	if (ft_memchr(test, 'z', 0) == memchr(test, 'z', 0))
		ft_putendl_fd("MEMCHR success", 1);
	else
		ft_putendl_fd("MEMCHR FAIL", 2);
	
	ft_putendl_fd("Tests de memcmp :", 1);
	if (ft_memcmp("Super correction !!", "Quel super correcteur", 1) == memcmp("Super correction !!", "Quel super correcteur", 1))
		ft_putendl_fd("MEMCMP success", 1);
	else
		ft_putendl_fd("MEMCMP FAIL", 2);
	if (ft_memcmp(" ", "Correction excellente", 0) == memcmp(" ", "Correction excellente", 0))
		ft_putendl_fd("MEMCMP success", 1);
	else
		ft_putendl_fd("MEMCMP FAIL", 2);

	ft_putendl_fd("Tests de strlen :", 1);
	if (ft_strlen("Super correction") == strlen("Super correction"))
		ft_putendl_fd("STRLEN success", 1);
	else
		ft_putendl_fd("STRLEN FAIL", 2);
	if (ft_strlen("   .") == strlen("   ."))
		ft_putendl_fd("STRLEN success", 1);
	else
		ft_putendl_fd("STRLEN FAIL", 2);

	ft_putendl_fd("Tests de isalpha :", 1);
	if (ft_isalpha('B') == isalpha('B'))
		ft_putendl_fd("ISALPHA success", 1);
	if (ft_isalpha(0) == isalpha (0))
		ft_putendl_fd("ISALPHA success", 1);
	else
		ft_putendl_fd("ISALPHA FAIL", 2);
	
	ft_putendl_fd("Tests de isdigit :", 1);
	if (ft_isdigit('c') == isdigit('c'))
		ft_putendl_fd("ISDIGIT success", 1);
	if (ft_isdigit(0) == isdigit(0))
		ft_putendl_fd("ISDIGIT success", 1);
	else
		ft_putendl_fd("ISDIGIT FAIL", 2);
	
	ft_putendl_fd("Tests de isalnum :", 1);
	if (ft_isalnum(42) == isalnum(42))
		ft_putendl_fd("ISALNUM success", 1);
	else
		ft_putendl_fd("ISALNUM FAIL", 1);
	if (ft_isalnum('N') == isalnum('N'))
		ft_putendl_fd("ISALNUM success", 1);
	else
		ft_putendl_fd("ISALNUM FAIL", 2);
	
	ft_putendl_fd("Tests de isascii :", 1);
	if (ft_isascii('n') == isascii('n'))
		ft_putendl_fd("ISASCII success", 1);
	else
		ft_putendl_fd("ISASCII FAIL", 2);
	
	ft_putendl_fd("Tests de isprint :", 1);
	if (ft_isprint('n') == isprint('n'))
		ft_putendl_fd("ISPRINT success", 1);
	else
		ft_putendl_fd("ISPRINT FAIL", 2);

	ft_putendl_fd("Tests de toupper :", 1);
	if (ft_toupper(0) == toupper(0))
		ft_putendl_fd("TOUPPER success", 1);
	else
		ft_putendl_fd("TOUPPER FAIL", 2);
	
	ft_putendl_fd("Tests de tolower :", 1);
	if (ft_tolower(0) == tolower(0))
		ft_putendl_fd("TOLOWER success", 1);
	else
		ft_putendl_fd("TOLOWER FAIL", 2);
	
	ft_putendl_fd("Tests de strchr :", 1);
	if (ft_strchr(test, 's') == strchr(test, 's'))
		ft_putendl_fd("STRCHR success", 1);
	else
		ft_putendl_fd("STRCHR FAIL", 2);
	if (ft_strchr(test1, 's') == strchr(test1, 's'))
		ft_putendl_fd("STRCHR success", 1);
	else
		ft_putendl_fd("STRCHR FAIL", 2);
	
	ft_putendl_fd("Tests de strrchr :", 1);
	if (ft_strrchr(test, 's') == strrchr(test, 's'))
		ft_putendl_fd("STRRCHR success", 1);
	else
		ft_putendl_fd("STRCHR FAIL", 2);
	if (ft_strrchr(test1, 's') == strrchr(test1, 's'))
		ft_putendl_fd("STRRCHR success", 1);
	else
		ft_putendl_fd("STRCHR FAIL", 2);

	ft_putendl_fd("Tests de strncmp :", 1);
	if (ft_strncmp("Super correction !!", "Quel super correcteur", 10) == strncmp("Super correction !!", "Quel super correcteur", 10))
		ft_putendl_fd("STRNCMP success", 1);
	else
		ft_putendl_fd("STRNCMP FAIL", 1);
	if (ft_strncmp("", "", 10) == strncmp("", "", 10))
		ft_putendl_fd("STRNCMP success", 1);
	else
		ft_putendl_fd("STRNCMP FAIL", 1);
	
	ft_putendl_fd("Tests de strlcpy", 1);
	if (ft_strlcpy(clibft, "HELLO WORLD", 420) ==  strlcpy(clibc, "HELLO WORLD", 420))
	{
		if (!strcmp(clibft, clibc))
			ft_putendl_fd("STRLCPY success", 1);
		else
			ft_putendl_fd("STRLCPY FAIL", 2);
	}
	else
		ft_putendl_fd("STRLCPY FAIL",2);
	
	ft_putendl_fd("Tests de strlcat :", 1);
	if (ft_strlcat(clibft, "HELLO WORLD", 420) == strlcat(clibc, "HELLO WORLD", 420))
	{
		if (!strcmp(clibft, clibc))
			ft_putendl_fd("STRLCAT success", 1);
		else 
			ft_putendl_fd("STRLCAT FAIL", 2);
	}
	else
		ft_putendl_fd ("STRLCAT FAIL", 2);
	
	ft_putendl_fd("Tests de strnstr :", 1);
	if (ft_strnstr(test, "c", 50) == strnstr(test, "c", 50))
		ft_putendl_fd("STRNSTR success", 1);
	else
		ft_putendl_fd("STRNSTR FAIL", 2);
	if (ft_strnstr(test1, "c", 50) == strnstr(test1, "c", 50))
		ft_putendl_fd("STRNSTR success", 1);
	else
		ft_putendl_fd("STRNSTR FAIL", 2);

	ft_putendl_fd("Tests d'atoi :", 1);	
	if (ft_atoi("  -42Une 42super correction !!") == atoi("  -42Une 42super correction !!"))
		ft_putendl_fd("ATOI success", 1);
	else
		ft_putendl_fd("ATOI FAIL", 2);
	if (ft_atoi("  --42Une 42super correction !!") == atoi("  --42Une 42super correction !!"))
		ft_putendl_fd("ATOI success", 1);
	else
		ft_putendl_fd("ATOI FAIL", 2);
	if (ft_atoi("-2147483648") == atoi("-2147483648"))
		ft_putendl_fd("ATOI success", 1);
	else
		ft_putendl_fd("ATOI FAIL", 2);

 
	ft_putendl_fd("Tests de calloc :", 1);
	ftptr = ft_calloc(42, sizeof(int));
	ptr = calloc(42, sizeof(int));
	if (!memcmp(ftptr, ptr, 42 * sizeof(int)))
		ft_putendl_fd("CALLOC success", 1);
	else
		ft_putendl_fd("CALLOC FAIL", 2);
	free(ftptr);
	free(ptr);

 	ft_putendl_fd("Tests de strdup :", 1);
 	dup = ft_strdup("Quelle super correction !");
	if(!strcmp(dup, "Quelle super correction !"))
			ft_putendl_fd("STRDUP success", 1);
		else
			ft_putendl_fd("STRDUP FAIL", 2);
		free(dup);

	free(libc);
	free(libft);
	return (0);
}
