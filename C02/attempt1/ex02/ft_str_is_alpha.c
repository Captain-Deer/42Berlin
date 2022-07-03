/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:31:49 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/01 16:32:44 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/

int	ft_str_is_alpha(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a'))
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
	char str1[100] = "Helloworld";
	char str2[100] = "hello123";
	char str3[100] = "";
	printf("should be 1: %d\n", ft_str_is_alpha(str1));
	printf("should be 0: %d\n", ft_str_is_alpha(str2));
	printf("should be 1: %d\n", ft_str_is_alpha(str3));
}
*/
