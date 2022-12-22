/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:34:46 by akrikuno          #+#    #+#             */
/*   Updated: 2022/06/30 22:38:42 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*int 	main(void)
{
	char	a[20] = {"Hel_please work"};
	char	b[20] = {"Hello "};
	unsigned int n = 3;

	
	printf("a: %s\n", a);
	printf("b: %s\n", b);
	printf("result: %d\n", ft_strncmp(a, b, n));
	
}
*/
