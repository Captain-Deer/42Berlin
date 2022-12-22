/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:36:38 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/17 19:40:11 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function checks if character is a digit */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char m;
	m = '2';
	printf("should be 1: %d\n", ft_isdigit(m));
}*/
