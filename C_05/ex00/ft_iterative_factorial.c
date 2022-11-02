/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:17:45 by rimarque          #+#    #+#             */
/*   Updated: 2022/08/03 10:18:27 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fator;

	fator = nb - 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	while (fator > 0)
	{
		nb = nb * fator;
		fator--;
	}
	return (nb);
}

/*int	main()
{
	printf("%d (0)\n", ft_iterative_factorial(-6));
	printf("%d (1)\n", ft_iterative_factorial(0));
	printf("%d (1)\n", ft_iterative_factorial(1));
	printf("%d (2)\n", ft_iterative_factorial(2));
	printf("%d (6)\n", ft_iterative_factorial(3));
	printf("%d (120)\n", ft_iterative_factorial(5));
}*/
