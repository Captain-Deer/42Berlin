/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:45:06 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 13:29:50 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strrchr() function locates the last occurrence of c
* (converted to a char) in the string s.
* If c is '\0', strrchr() locates the terminating '\0'.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	printf("%s\n", ft_strrchr("Hello, world!", 'o'));
	printf("%s\n", ft_strrchr("This is a test", 't'));
	printf("%s\n", ft_strrchr("Hello, world!", 'z'));
} */