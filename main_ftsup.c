/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ftsup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamart <tlamart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:38:58 by tlamart           #+#    #+#             */
/*   Updated: 2019/10/23 21:02:38 by tlamart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);

int		main(void)
{
	char	*substr;
	char	*join;
	char	*trim;
	char	**split;
	char	*ascii;
	int		i;

	substr = ft_substr("0123456789", 3, 5);
	ft_putendl_fd("substr = ft_substr(\"0123456789\", 3, 5);", 1);
	ft_putendl_fd(substr, 1);
	free(substr);

	join = ft_strjoin("Hello", "World");
	ft_putendl_fd("ft_strjoin(\"Hello\", \"World\")", 1);
	ft_putendl_fd(join, 1);
	free(join);

	trim = ft_strtrim("    \t   \n  \n trop long . . .  \n \r \r     ", " \n\t\r");
	ft_putendl_fd("ft_strtrim(\"    \t   \n  \n trop long . . .  \n \r \r     \", \" \n\t\r\")", 1);
	ft_putendl_fd(trim);
	free(trim);

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

	ascii = ft_itoa(-2147483648);
	ft_putendl_fd("ft_itoa(-2147483648)", 1);
	ft_putendl_fd(ascii, 1);
	free(ascii);
}