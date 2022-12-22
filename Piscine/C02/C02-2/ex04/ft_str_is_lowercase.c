/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:03:57 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/01 16:38:02 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
	char str1[100] = "helloworld";
	char str2[100] = "hello123";
	char str3[100] = "";
	printf("should be 1: %d\n", ft_str_is_lowercase(str1));
	printf("should be 0: %d\n", ft_str_is_lowercase(str2));
	printf("should be 1: %d\n", ft_str_is_lowercase(str3));
}
*/
