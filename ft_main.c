/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:24:16 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/20 13:56:37 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
	char	*libft;
	char	*libc;
	int		i;

	libft = malloc(420);
	libc = malloc(420);

	ft_putendl_fd("Tests memset :", 1);
	ft_memset(libft, 42, 420);
	memset(libc, 42, 420);
	if (ft_loop(libft, libc))
		ft_putstr_fd("MEMSET SUCCESS\n", 1);
	else
		ft_putstr_fd("MEMSET FAIL\n", 2);
	ft_memset(libft, -5, 10);
	memset(libc, -5, 10);
	if (ft_loop(libft, libc))
		ft_putstr_fd("MEMSET SUCCESS\n", 1);
	else
		ft_putstr_fd("MEMSET FAIL\n", 2);
	ft_memset(libft, 99, 0);
	memset(libc, 99, 0);
	if (ft_loop(libft, libc))
		ft_putstr_fd("MEMSET SUCCESS\n", 1);
	else
		ft_putstr_fd("MEMSET FAIL\n", 2);

	ft_putendl_fd("Test bzero :", 1);
	ft_bzero(libft, 99);
	bzero(libc, 99);
	if (ft_loop(libft, libc))
		ft_putstr_fd("BZERO SUCCESS\n", 1);
	else
		ft_putstr_fd("BZERO FAIL\n", 2);
	ft_bzero(libft, 420);
	bzero(libc, 420);
	if (ft_loop(libft, libc))
		ft_putstr_fd("BZERO SUCCESS\n", 1);
	else
		ft_putstr_fd("BZERO FAIL\n", 2);

	ft_putendl_fd("Tests memcpy :", 1);
	ft_memcpy(libft, "SUPER MAIN DE TEST !!", 22);
	memcpy(libc, "SUPER MAIN DE TEST !!", 22);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMCPY SUCCESS", 1);
	else
		ft_putendl_fd("MEMCPY FAIL", 2);
	ft_memcpy(libft, "CORRECTEUR AU TOP", 3);
	memcpy(libc, "CORRECTEUR AU TOP", 3);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMCPY SUCCESS", 1);
	else
		ft_putendl_fd("MEMCPY FAIL", 2);
	
	ft_putendl_fd("Tests memccpy :", 1);
	ft_memccpy(libft, "SUPER MAIN DE TEST !!", 5, 22);
	memccpy(libc, "SUPER MAIN DE TEST !!", 5, 22);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMCCPY SUCCESS", 1);
	else
		ft_putendl_fd("MEMCCPY FAIL", 1);
	ft_memccpy(libft, "CORRECTEUR AU TOP", 1, 3);
	memccpy(libc, "CORRECTEUR AU TOP", 1, 3);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMCCPY SUCCESS", 1);
	else
		ft_putendl_fd("MEMCCPY FAIL", 2);

	ft_putendl_fd("Tests memmove :", 1);
	ft_memmove(libft, libft + 10, 42);
	memmove(libc, libc + 10, 42);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMMOVE SUCCESS", 1);
	else
		ft_putendl_fd("MEMMOVE FAIL", 2);
	ft_memmove(libft + 42, libft, 42);
	memmove(libc + 42, libc, 42);
	if (ft_loop(libft, libc))
		ft_putendl_fd("MEMMOVE SUCCESS", 1);
	else
		ft_putendl_fd("MEMMOVE FAIL", 2);

	ft_putendl_fd("Tests memchr :", 1);
// WIP
	

	free(libft);
	free(libc);
}
