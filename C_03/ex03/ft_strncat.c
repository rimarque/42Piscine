/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:43:28 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/26 22:44:11 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	i;

	size = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != 0)
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "rita";
	char	dest[20] = "banana";

	printf("%s\n", ft_strncat(dest, src, 0));
	printf("%s\n", strncat(dest, src, 0));
	return (0);
}*/
