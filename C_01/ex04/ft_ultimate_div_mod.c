/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:15:45 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/22 15:16:02 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / (*b);
	d = *a % (*b);
	*a = c;
	*b = d;
}

/*int main(void)
{
	int a;
	int b; 

	a = 10;
	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d\n", a, b);
	return (0);
}*/
