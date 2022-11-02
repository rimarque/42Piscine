/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:26:16 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/30 19:26:19 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int main()
{
	printf("%d\n",ft_str_is_lowercase("123"));
	printf("%d\n",ft_str_is_lowercase("lado"));
	printf("%d\n",ft_str_is_lowercase("lAdo"));
	printf("%d\n",ft_str_is_lowercase("lado1"));
	return (0);
}*/
