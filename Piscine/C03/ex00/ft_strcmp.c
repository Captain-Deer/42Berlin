/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:12:10 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/03 15:35:37 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int 	main(void)
{
	char str1[] = {"1234567890"};
	char str2[] = {"1234567890"};
  
	if (ft_strcmp(str1, str2) == 0)
    		printf("strings are identical");
	else
    		printf("strings are different\n");
	return (0);
}
*/
