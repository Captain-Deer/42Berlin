/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:50:42 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 21:56:52 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function is used to compare two blocks of memory. It takes three arguments:
*    s1: a pointer to the first block of memory to be compared
*    s2: a pointer to the second block of memory to be compared
*    n: the number of bytes to compare 
* Function returns an integer value indicating the relationship between the two 
* blocks of memory. If the two blocks are equal, the function returns 0. 
* If the first non-matching byte in s1 is greater than the corresponding byte 
* in s2, the function returns a positive value. */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
int main(void)
{
    char *str1 = "hello";
    char *str2 = "helli";
    char *str3 = "hella";
    char *str4 = "hellu";

    printf("ft_memcmp(str1, str2, 5) = %d\n", ft_memcmp(str1, str2, 5));
    printf("ft_memcmp(str1, str3, 5) = %d\n", ft_memcmp(str1, str3, 5));
    printf("ft_memcmp(str1, str4, 5) = %d\n", ft_memcmp(str1, str4, 5));
    printf("ft_memcmp(str1, str4, 6) = %d\n", ft_memcmp(str1, str4, 6));

    return 0;
} */