/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:41:21 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 13:18:37 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function copies a string from a source to a destination, truncating the 
* destination string if necessary to fit within a specified size. 
* Takes three arguments: char *dst: a pointer to the destination string
*    const char *src: a pointer to the source string
*    size_t size: the maximum number of bytes to be copied */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] != '\0' && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/* Function uses a loop to copy each character from the source string src 
* to the destination string dst, until it reaches the end of the source string 
* or the maximum size of the destination string. It then adds a null terminator 
* to the destination string. */

/* #include <stdio.h>
int main(void)
{
	char	dst[6];

	ft_strlcpy(dst, "Hello, world!", sizeof(dst));
	printf("%s\n", dst);

	ft_strlcpy(dst, "This is a test", sizeof(dst));
	printf("%s\n", dst);

	ft_strlcpy(dst, "", sizeof(dst));
	printf("%s\n", dst);
} */