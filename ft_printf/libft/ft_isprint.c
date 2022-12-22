/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:38:13 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/09 19:03:46 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function checks if symbol is printable, including space */
/* (from 32 in ascii table and not DEL (127)) */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char m;
	m = '\0';
	printf("should be 0: %d\n", ft_isascii(m));
}*/
