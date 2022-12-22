/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:39:54 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/09 18:52:09 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memcpy() function copies n bytes from memory area s2 */
/* to memory area s1. If s1 and s2 overlap, behavior is undefined.*/
/* Applications in which s1 and s2 might overlap should use memmove */
/* instead.*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/* #include <stdio.h>
int main(void)
{
	int i;
	int arr1[];
	int arr2[5];

	i = 0;
	arr1 = {1, 2, 3, 4, 5};
	memcpy(arr2, arr1, sizeof(arr1));
	while (i < 5)
	{
		printf("%d\n", arr2[i]);
		i++;
	}
}*/
