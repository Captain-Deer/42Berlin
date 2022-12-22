/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:37:46 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/09 19:02:49 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function checks if character is in ascii */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char m;
	m = '¬';
	printf("should be 0: %d\n", ft_isascii(m));
}*/
