/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:38:53 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/09 19:25:50 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Man: the memset function fill n (len) bytes of value c */
/* (converted to an unsigned char) to the string s.*/
/* This function returns a pointer to the memory area s.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char	*p;

	p = (char *)s;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (s);
}

/* #include <stdio.h>
int main(void)
{
	char	buffer[20 + 1];
	char	buffer_lib[20 + 1];
	char	*string;
	char	*string2;
	ft_memset(buffer, 0, sizeof(buffer));
	string = (char *) ft_memset(buffer,'A', 10);
	printf("\nBuffer contents: %s\n", string);
	ft_memset(buffer + 10, 'B', 10);
	printf("\nBuffer contents: %s\n", buffer);
	memset(buffer_lib, 0, sizeof(buffer_lib));
	string2 = (char *) memset(buffer_lib,'A', 10);
	printf("\nBuffer contents: %s\n", string2);
	memset(buffer_lib + 10, 'B', 10);
	printf("\nBuffer contents: %s\n", buffer_lib);
}*/
