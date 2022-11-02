/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:44:43 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/31 19:46:03 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char test[] = "hI, hI, 42tEsT 42";
	char test2[] = "salUt, cOmMent tu vas ? 42moTs quarAnTe-deux; cInQuante+et+un";
	ft_strcapitalize(test);
	printf("%s\n", test);
	ft_strcapitalize(test2);
	printf("%s\n", test2);
	return 0;
}
