/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:47:28 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/09 19:13:24 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Takes one argument: a pointer to a string to be duplicated */
/* Function returns a pointer to the duplicated string, or NULL */
/* if it was unable to allocate memory for the new string.*/
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	len;

	len = ft_strlen((char *)str) + 1;
	dup = malloc(sizeof(char) * len);
	if (!dup)
		return (0);
	dup = ft_memcpy(dup, str, len);
	return (dup);
}

/*#include <stdio.h>
int main(void)
{
	char *str;
	char *dup;

	str = "Hello, world!";
	dup = ft_strdup(str);
	printf("The original string is: %s\n", str);
	printf("The duplicated string is: %s\n", dup);

	free(dup);
	return(0);
} */
