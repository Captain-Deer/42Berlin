/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:37:05 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/17 19:39:22 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function checks if character is letter or number */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char m;
	char n;
	char t;
	m = '2';
	n = 'a';
	t = ':';
	printf("should be 1: %d\n", ft_isalnum(m));
	printf("should be 1: %d\n", ft_isalnum(n));
	printf("should be 0: %d\n", ft_isalnum(t));
}*/
