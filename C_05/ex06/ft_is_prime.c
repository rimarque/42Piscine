/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:06:37 by rimarque          #+#    #+#             */
/*   Updated: 2022/08/03 20:06:46 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	d;

	if (nb < 2)
		return (0);
	d = 2;
	while (d <= nb / d)
	{
		if (nb % d == 0)
			return (0);
		d++;
	}
	return (1);
}

/*int	main()
{
	printf("%d(1)\n", ft_is_prime(2));
	printf("%d(1)\n", ft_is_prime(97));
	printf("%d(0)\n", ft_is_prime(-5));
	printf("%d(0)\n", ft_is_prime(0));
	printf("%d(0)\n", ft_is_prime(1));
	printf("%d(0)\n", ft_is_prime(9));
}*/
