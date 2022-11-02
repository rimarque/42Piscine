/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:17:22 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/26 16:17:47 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	p;
	int	u;
	int	tabnovo;

	p = 0;
	u = size - 1;
	while (p < u)
	{
		tabnovo = tab[p];
		tab[p] = tab[u];
		tab[u] = tabnovo;
		p++;
		u--;
	}
}

/*int main()
{
    int tab[] = {1, 2, 3, 4};
    ft_rev_int_tab(tab, 4);
    printf("%d\n", tab[0]);
    printf("%d\n", tab[1]);
    printf("%d\n", tab[2]);
    printf("%d\n", tab[3]);
    return (0);
}*/
