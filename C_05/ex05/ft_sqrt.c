/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:44:54 by rimarque          #+#    #+#             */
/*   Updated: 2022/08/03 18:46:08 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n < nb / n)
	{
		n++;
	}
	if (n * n == nb)
		return (n);
	return (0);
}

/*int	main()
{
	printf("%d", ft_sqrt(36));
}*/
