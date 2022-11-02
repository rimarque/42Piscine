/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:27:51 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/30 19:27:54 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 31 || str[i] == 127))
			return (0);
		i++;
	}
	return (1);
}

/*int main()
{
	printf("%d\n",ft_str_is_printable("123\0"));
	printf("%d\n",ft_str_is_printable("\0"));
	printf("%d\n",ft_str_is_printable("lAdo"));
	printf("%d\n",ft_str_is_printable("\a"));
	return (0);
}*/
