/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:40:55 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 21:52:51 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memmove() function copies n bytes from string s2 to string s1. */
/* The main difference between memcpy and memmove is that memmove can */
/* handle overlapping source and destination memory locations */
/* Can be used to move data within the same array without causing */
/*undefined behavior */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len --)
		*d ++ = *s++;
	return (dst);
}

/*#include <stdio.h>
int main(void)
{
	int i;
	int arr[];

	i = 0;
	arr = {1, 2, 3, 4, 5};
	ft_memmove(arr, arr + 2, 3 * sizeof(int));
	while (i < 5)
	{
		printf("d\n", arr[i]);
		i++;
	}
}*/
