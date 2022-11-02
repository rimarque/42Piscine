/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:26:42 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/30 19:27:16 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*int main()
{
	printf("%d\n",ft_str_is_lowercase("123"));
	printf("%d\n",ft_str_is_lowercase("LADO"));
	printf("%d\n",ft_str_is_lowercase("lAdo"));
	printf("%d\n",ft_str_is_lowercase("lado1"));
	return (0);
}*/
