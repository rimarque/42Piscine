/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:58:23 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/28 19:58:36 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	alpha;
	int	count;

	alpha = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 'a' && str[count] <= 'z')
			|| (str[count] >= 'A' && str[count] <= 'Z'))
			alpha++;
		count++;
	}
	if (alpha == count)
		return (1);
	else
		return (0);
}

/*int	main()
{
	printf("%d\n", ft_str_is_alpha("ritaadasda"));
	return (0);
}*/
