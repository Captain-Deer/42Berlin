/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:50:12 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 22:11:54 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function modifies a string in place by applying a function to each*/
/* character of the string and its corresponding index*/
/* Takes two arguments: the string to be modified and the function to apply */
/* to each character */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		i;
	int		len;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while (i < len)
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/* toupper applied to each character in the string and the resulting */
/* modified string (HELLO WORLD!) is printed in the console*/
/* #include <stdio.h>

char fish(unsigned int i, char c)
{
	(void) i;
	return (ft_tolower(c));
}

int main(void)
{ 
	char	str[] = "HELLO WORLD this is fun!";
	printf ("Original string: %s\n", str);
	char *new = ft_strmapi(str, fish);
	printf("Lowercase string: %s\n", new);
	return (0);
}*/
