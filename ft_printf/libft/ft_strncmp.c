/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:45:34 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/17 16:26:28 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function that compares a specified number of characters of two strings */
/* and returns an integer indicating their  lexicographical relationship.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hellp";

    printf("ft_strncmp(s1, s2, 5) = %d\n", ft_strncmp(s1, s2, 5));

    return (0);
} */