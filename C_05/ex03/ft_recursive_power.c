/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:37:05 by rimarque          #+#    #+#             */
/*   Updated: 2022/08/03 15:37:15 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main()
{
	printf("%d (8)\n", ft_recursive_power(2, 3));
	printf("%d (2)\n", ft_recursive_power(2, 1));
	printf("%d (36)\n", ft_recursive_power(-6, 2));
	printf("%d (0)\n", ft_recursive_power(2, -5));
	printf("%d (1)\n", ft_recursive_power(0, 0));
	printf("%d (0)\n", ft_recursive_power(0, 5));
	printf("%d (531441)\n", ft_recursive_power(3, 12));
	printf("%d (1728)\n", ft_recursive_power(12, 3));
	printf("%d (1)\n", ft_recursive_power(8, 0));
}*/
