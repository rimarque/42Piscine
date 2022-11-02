/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:00:00 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/20 13:00:37 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	if (n < 10)
	{
		write(1, "0", 1);
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		c = n / 10 + '0';
		write(1, &c, 1);
		c = n % 10 + '0';
		write(1, &c, 1);
	}			
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar(a);
			write(1, " ", 1);
			ft_putchar(b);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
