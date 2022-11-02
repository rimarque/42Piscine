/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 20:02:46 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/28 20:02:55 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= '0' && str[count] <= '9'))
			return (0);
		count++;
	}
	return (1);
}

/*int main()
{
	printf("%d\n",ft_str_is_numeric("123"));
	printf("%d\n",ft_str_is_numeric("lado"));
	printf("%d\n",ft_str_is_numeric("1lado"));
	printf("%d\n",ft_str_is_numeric("lado1"));
	return (0);
}*/
