/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:46:44 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/17 19:08:15 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function locates the first occurrence of the null-terminated string */
/* s2 in the string s1. Not more than n characters are searched.*/
/* Characters that appear after a '\0' character are not searched. */
/* Returns a pointer to the first character of the located string*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[b] != '\0')
	{
		l = 0;
		while (big[b + l] == little[l] && ((b + l) < len))
		{
			if (big[b + l] == '\0' && little [l] == '\0')
				return ((char *)&big[b]);
			l++;
		}
		if (little[l] == '\0')
			return ((char *)big + b);
		b++;
	}
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	char s1[] = "Hello, World!";
	char s2[] = "World";

	printf("result is: %s\n", ft_strnstr(s1, s2, 13));
	return (0);
} */