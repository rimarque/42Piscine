/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:46:35 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/22 14:47:45 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int*mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int div;
	int mod;

	div = 0;
	mod = 0;

	ft_div_mod(5, 2, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
}*/
