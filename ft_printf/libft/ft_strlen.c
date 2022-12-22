/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:38:33 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 13:24:44 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function calculates the length of a string*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	lenght;

	lenght = 0;
	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}

/* #include <stdio.h>
int main(void)
{
	char *s1 = "Hello World!";

	printf("%zu\n", ft_strlen(s1));
} */
/* The %zu format specifier is used to print a value of type size_t using
* the printf function. It is similar to the %u format specifier, which is used
* to print an unsigned integer, but it is specifically designed to be used with
* the size_t type.*/