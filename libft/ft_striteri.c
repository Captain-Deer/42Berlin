/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:50:32 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 13:31:51 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Takes 3 arguments: A pointer to the string to be iterated over; */
/*	A pointer to the user-defined function that will be applied to */
/* each character in the string; A void pointer that will be passed */
/* as the third argument to the user-defined function. f - is the name */
/* of the function. function will be called once for each character in */
/* the string*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*#include <stdio.h>
void print_char_index(unsigned int index, char *c)
{
	printf("The character at index %u is '%c'\n", index, *c);
}

int main(void)
{
	char *str;

	str = "Hello, world!";
	ft_striteri(str, print_char_index);
	return (0);
} */
