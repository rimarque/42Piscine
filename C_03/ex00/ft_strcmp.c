/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:13:40 by rimarque          #+#    #+#             */
/*   Updated: 2022/07/31 15:13:46 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*int main() 
{
  char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd", str4[] = "abcdut";
  int result;

  //comparing strings str1 and str2
  result = ft_strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = ft_strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);

   // comparing strings str1 and str4
  result = ft_strcmp(str1, str4);
  printf("strcmp(str1, str4) = %d\n", result);

   // comparing strings str1 and str2
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);

   // comparing strings str1 and str4
  result = strcmp(str1, str4);
  printf("strcmp(str1, str4) = %d\n", result);
  return 0;
 }*/
