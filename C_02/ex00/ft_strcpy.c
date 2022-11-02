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

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[5] = "rita";
	char	dest[5];

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}*/
