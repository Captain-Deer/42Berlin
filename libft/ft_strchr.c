/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:44:37 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/09 19:15:07 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Takes two arguments: pointer to the string to search, */
/* character to search for. Returns a pointer to the first */
/* occurrence of character, or NULL if it is not found */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

/*#include <stdio.h>
int main(void)
{
	char *str;
	char *ptr;

	str = "Hello, world!";
	ptr = ft_strchr(str, 'w');
	if (ptr != NULL)
		printf ("The character 'w' found in %s\n", ptr);
	else
		printf ("The character was not found\n");
}*/
