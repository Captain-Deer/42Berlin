/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:46:20 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 21:52:03 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memchr() function locates the first occurrence of c */
/* (converted to an unsigned char) in string s.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char *str;
	char *result;

	str = "Hello, world!";
	result = ft_memchr(str, 'w', ft_strlen(str));
	if (result != NULL)
		printf("'w' found at %s\n", result);
	else
		printf("'w' not found\n");
	return(0);
}*/
