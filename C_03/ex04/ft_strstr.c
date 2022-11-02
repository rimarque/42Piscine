/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tentativa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:33:25 by rimarque          #+#    #+#             */
/*   Updated: 2022/08/01 14:33:31 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_to_find(char *str, char *to_find, int a, int b)
{
	while (to_find[b] != 0)
	{
		if (str[a] == to_find[b])
		{
			a++;
			b++;
		}
		else
			return (0);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;
	int	b;

	if (to_find[0] == 0)
		return (str);
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			a = i + 1;
			b = 1;
			if (ft_to_find(str, to_find, a, b) == 1)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*int	main()
{	
	char str[]="123ahasdasdasdahoyoysenofgrita";
	char to_find[]="ahoy";
	char str1[]= "gugugaga";
	char str2[]= "";

	printf("A minha funcao\n 1 %s\n", ft_strstr(str, to_find));
	printf("2 %s\n", ft_strstr(str, str1));
	printf("3 %s\n", ft_strstr(str, str2));
	printf("Funcao verdadeira\n 1 %s\n", strstr(str, to_find));
	printf("2 %s\n", strstr(str, str1));
	printf("3 %s\n", strstr(str, str2));
}*/
