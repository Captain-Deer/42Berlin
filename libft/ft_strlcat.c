/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:41:41 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 16:10:34 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strlcat() appends string src to the end of dst. It will then NUL-terminate, 
*  unless dstsize is 0 or the original dst string was longer than dstsize (
*	Takes 3 arguments: destination string in which to concatenate.
*	The source string to concatenate.
*	The total number of bytes in destination.
*	Function returns the length of the string it tried to create. */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != 0 && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = 0;
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

/*#include <stdio.h>
int main(void)
{
	char *dst = "Hello";
	char *src = ", world!";

	printf("total lenght (should be 14): %ld\n", ft_strlcat(dst, src, 6));
}*/
