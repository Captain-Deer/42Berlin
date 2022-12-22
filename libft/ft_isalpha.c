/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:36:11 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/17 19:37:43 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function checks if character is a letter */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i < 'A') || (i > 'Z' && i < 'a') || (i > 'z'))
		return (0);
	return (1);
}

/*#include <stdio.h>
int main(void)
{
	char m;
	m = '2';
	printf("should be 0: %d\n", ft_isalpha(m));
}*/
