/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:18:26 by rimarque          #+#    #+#             */
/*   Updated: 2022/08/02 19:18:39 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	**ft_sort_arg(int argc, char **argv)
{
	int		a;
	int		b;
	char	*argvnovo;

	a = 0;
	while (a < argc - 1)
	{
		b = a + 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				argvnovo = argv[a];
				argv[a] = argv[b];
				argv[b] = argvnovo;
			}
			b++;
		}
		a++;
	}
	return (argv);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_arg(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
