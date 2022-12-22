/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:47:11 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/09 18:48:02 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Man: The calloc() function contiguously allocates enough space for */
/* count objects that are size bytes of memory each. */
/* It takes two arguments: the number of elements in the array and the */
/* size of each element. Returns a pointer to the allocated memory. */
/* The allocated memory is filled with bytes of value zero. */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;

	dst = malloc(size * count);
	if (dst == 0)
		return (dst);
	ft_bzero(dst, size * count);
	return (dst);
}

/*#include <stdio.h>
int	main(void)
{
	int *arr;
	int i = 0;

	arr = (int *)ft_calloc(10, sizeof(int));
	while (i < 10)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
		i++;
	}

	free(arr);
	return (0);
}*/
