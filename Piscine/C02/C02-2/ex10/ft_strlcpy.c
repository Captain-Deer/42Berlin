/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:57:15 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/01 17:27:31 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	if (size != 0)
	{
		while (src[i] != '\0' && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}

/*int main(void)
{
	char string1[11] = "helloworld";
	char string2[11] = "adrfgrtgrt";
 	
	printf("string1: %s\n", string1);
	printf("string2: %s\n", string2);
	ft_strlcpy(string2, string1, 5);
	printf("result: %s\n", string2);
}
*/
