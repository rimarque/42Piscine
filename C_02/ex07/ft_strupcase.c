/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:29:08 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/30 19:29:15 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	teste1[] = "tesst 233 eERrt";
	char	teste2[] = "   GGhdr";
	char	teste3[] = ",KDFGKERU";
	char	teste4[] = "  ";
	printf("%s\n", ft_strupcase(teste1));
	printf("%s\n", ft_strupcase(teste2));
	printf("%s\n", ft_strupcase(teste3));
	printf("%s\n", ft_strupcase(teste4));
	return (0);
}*/
