/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:16:27 by rimarque          #+#    #+#             */
/*   Updated: 2022/08/02 11:16:54 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	count;

	len_dest = 0;
	len_src = 0;
	count = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	while (src[count] != '\0' && (count + len_dest) < size - 1)
	{
		dest[len_dest + count] = src[count];
		count++;
	}
	dest[count + len_dest] = '\0';
	return (len_dest + len_src);
}
