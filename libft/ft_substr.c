/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:48:43 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 13:36:09 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a substring from the string ’s’.
*	The substring begins at index ’start’ and is of maximum size ’len’.
*	Take three arguments: the string from which to create the substring;
*	The start index of the substring in the string ’s’;
*	The maximum length of the substring.
*	Returns the substring and NULL if the allocation fails.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	ls;
	size_t	i;

	if (!s)
		return (NULL);
	ls = ft_strlen(s);
	if (len > ls)
		len = ls;
	if (ls < start)
		len = 0;
	if (start == ls - 1 && len)
		len = 1;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	i = 0;
	if (start < ls)
		ft_strlcpy(ptr, s + start, len + 1);
	else
		ptr[i] = '\0';
	return (ptr);
}

/* #include <stdio.h>
int main(void)
{
	char	*substr;

	substr = ft_substr("Hello, world!", 6, 5);
	printf("%s\n", substr);
	free(substr);

	substr = ft_substr("This is a test", 3, 5);
	printf("%s\n", substr);
	free(substr);

} */