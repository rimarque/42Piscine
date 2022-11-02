/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:34:41 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/27 13:34:56 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i != n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i != n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char	src[5] = "rita";
	char	dest[5];
	
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

    	ft_strncpy(dest, src, 20);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}
