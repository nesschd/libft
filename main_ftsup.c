/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ftsup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:38:58 by nchahed           #+#    #+#             */
/*   Updated: 2019/10/23 23:05:50 by nchahed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	ft_test(unsigned int i, char c)
{
	if (i % 2)
		return ('C');
	else
		return (c);
}

int		main(void)
{
	char	*substr;
	char	*join;
	char	*trim;
	char	**split;
	char	*ascii;
	int		i;
	char	*mapi;
	
	ft_putendl_fd("Tests de substr :", 1);
	substr = ft_substr("0123456789", 3, 5);
	ft_putendl_fd("substr = \"0123456789\", 3, 5;", 1);
	ft_putendl_fd(substr, 1);
	free(substr);
	ft_putchar_fd('\n', 1);
	
	ft_putendl_fd("Tests de strjoin :", 1);
	join = ft_strjoin("Hello", "World");
	ft_putendl_fd("ft_strjoin(\"Hello\", \"World\")", 1);
	ft_putendl_fd(join, 1);
	free(join);
	ft_putchar_fd('\n', 1);
	
	ft_putendl_fd("Tests de strtrim :", 1);
	trim = ft_strtrim("    \t   \n  \n trop long . . .  \n \r \r     ", " \n\t\r");
	ft_putendl_fd("ft_strtrim(\"    \\t   \\n  \\n trop long . . .  \\n \\r \\r     \", \" \\n\\t\\r\")", 1);
	ft_putendl_fd(trim, 1);
	free(trim);
	ft_putchar_fd('\n', 1);
	
	ft_putendl_fd("Tests de split :", 1);
	split = ft_split("- -bonjour-le-monde---hello-world---ghutentag-heinawer-lest", '-');
	ft_putendl_fd("ft_split(\"- -bonjour-le-monde---hello-world---ghutentag-heinawer-lest\", \'-\')", 1);
	i = 0;
	while (split[i])
	{
		ft_putstr_fd("split[", 1);
		ft_putnbr_fd(i, 1);
		ft_putstr_fd("] = ", 1);
		ft_putendl_fd(split[i], 1);
		free(split[i]);
		i++;
	}
	free(split);
	ft_putchar_fd('\n', 1);
	
	ft_putendl_fd("Tests de itoa :", 1);
	ascii = ft_itoa(-2147483648);
	ft_putendl_fd("ft_itoa(-2147483648)", 1);
	ft_putendl_fd(ascii, 1);
	free(ascii);
	free(NULL);
	ft_putchar_fd('\n', 1);

	ft_putendl_fd("Tests de strmapi :", 1);
	mapi = ft_strmapi("Super correction", &ft_test);
	if (!(strcmp(mapi, "SCpCrCcCrCeCtCoC")))
		ft_putendl_fd("STRMAPI SUCCESS", 1);
	else
		ft_putendl_fd("STRMAPI FAIL", 1);
	free(mapi);

	return (0);
}
