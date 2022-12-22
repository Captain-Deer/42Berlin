/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:58:16 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/01 16:36:43 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/

int	ft_str_is_numeric(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
	char str1[100] = "01245";
	char str2[100] = "hello123";
	char str3[100] = "";
	printf("should be 1: %d\n", ft_str_is_numeric(str1));
	printf("should be 0: %d\n", ft_str_is_numeric(str2));
	printf("should be 1: %d\n", ft_str_is_numeric(str3));
}
*/
