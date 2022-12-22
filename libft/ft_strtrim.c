/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:49:24 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 13:31:36 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
*	specified in ’set’ removed from the beginning and the end of the string.
*	Takes two arguments: the string to be trimmed; the reference set of
* 	characters to trim. Returns the trimmed string and null if allocation 
* 	fails */

#include "libft.h"

int	ft_setcheck(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	if (s1 == 0 || set == 0)
		return (0);
	end = (int)ft_strlen(s1);
	while (s1[start] && ft_setcheck(s1[start], set))
		start++;
	while (end > start && ft_setcheck(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (0);
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int main(void)
{
    char    *s1;
    char    *s2;

    s1 = "HelloWorldHello";
    s2 = "Hello";
    printf("Test string: \"%s\" Cut: \"%s\" Result: %s\n", \
            s1, s2, ft_strtrim(s1, s2));
    s2 = "Hi";
    printf("Test string: \"%s\" Cut: \"%s\" Result: %s\n", \
            s1, s2, ft_strtrim(s1, s2));
    s2 = "Wo";
    printf("Test string: \"%s\" Cut: \"%s\" Result: %s\n", \
            s1, s2, ft_strtrim(s1, s2));
} */
