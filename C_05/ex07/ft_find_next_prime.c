/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:50:04 by rimarque          #+#    #+#             */
/*   Updated: 2022/08/03 20:50:26 by rimarque         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

/*int	main()
{
	printf("%d(2)\n", ft_find_next_prime(1));
	printf("%d(5)\n", ft_find_next_prime(5));
	printf("%d(7)\n", ft_find_next_prime(6));
	printf("%d(2)\n", ft_find_next_prime(-5));
	printf("%d(37)\n",ft_find_next_prime(32));
	printf("%d(97)\n",ft_find_next_prime(90));
	printf("%d(2)\n", ft_find_next_prime(-50));
}*/
