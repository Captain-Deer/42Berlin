/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:29:59 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/01 16:39:49 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char str1[100] = "hello123";
	char str2[100] = "\a";
	char str3[100] = "";
	printf("should be 1: %d\n", ft_str_is_printable(str1));
	printf("should be 0: %d\n", ft_str_is_printable(str2));
	printf("should be 1: %d\n", ft_str_is_printable(str3));
}
*/
