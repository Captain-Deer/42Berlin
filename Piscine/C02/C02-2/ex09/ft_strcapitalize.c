/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:20:42 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/01 20:18:22 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
*/
char	*ft_strcapitalize(char *str)
{
	int		i;
	char	n;

	i = 1;
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{	
		n = str[i - 1];
		if (n < '0' || (n > '9' && n < 'A') || (n > 'Z' && n < 'a') || n > 'z')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}	
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n");
	printf("%s\n", ft_strcapitalize(str));
}
*/
