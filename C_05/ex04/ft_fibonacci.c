/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:29:54 by rimarque          #+#    #+#             */
/*   Updated: 2022/08/03 17:30:02 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}

/*int		main(void)
{
	printf("%d (-1)\n", ft_fibonacci(-3));
	printf("%d (0)\n", ft_fibonacci(0));
	printf("%d (1)\n", ft_fibonacci(1));
	printf("%d (1)\n", ft_fibonacci(2));
	printf("%d (2)\n", ft_fibonacci(3));
	printf("%d (3)\n", ft_fibonacci(4));
}*/
