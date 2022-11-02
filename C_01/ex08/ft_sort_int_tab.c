/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:07:52 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/26 18:08:37 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tabnovo;

	a = 0;
	while (a < (size - 1))
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				tabnovo = tab[a];
				tab[a] = tab[b];
				tab[b] = tabnovo;
			}
			b++;
		}
		a++;
	}
}

/*int main()
{
    int tab[] = {789, 7, 85, 1, 5, 1937, 3};
    ft_sort_int_tab(tab, 7);
    printf("%d\n", tab[0]);
    printf("%d\n", tab[1]);
    printf("%d\n", tab[2]);
    printf("%d\n", tab[3]);
    printf("%d\n", tab[4]);
    printf("%d\n", tab[5]);
    printf("%d\n", tab[6]);
    return (0);
}*/
