/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:39:16 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/09 18:29:53 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Man: function writes n zero bytes to the string s.*/
/* If n is zero, ft_bzero does nothing.*/
/* So we are making a string of size n and filling each index position */
/* with a 0. We can use previously made ft_memset function for this.*/
/* We set it ahead of time to fill whatever string at size n with 0.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*str_c;

	str_c = (char *)s;
	i = 0;
	while (i < n)
	{
		*(str_c + i) = 0;
		i++;
	}
}

/*#include <stdio.h>
int main(void)
{
	char	s1[20 + 1];
	ft_memset(s1, 'A', 20);
	printf("\nBuffer contents: %s\n", s1);
	ft_bzero(s1, 11);
	printf("\nBuffer contents: %s\n", s1);
	printf("\nBuffer charcter 9  contents: %c\n", s1[9]);
	printf("\nBuffer charcter 10 contents: %c\n", s1[10]);
	printf("\nBuffer charcter 11 contents: %c\n", s1[11]);
}*/
