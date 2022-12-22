/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:42:08 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/09 19:08:25 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function returns a lowercase letter as an uppercase letter */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		i -= 32;
	return (i);
}

/*#include <stdio.h>
int main(void)
{
	char m;
	m = 'b';
	printf("Should be B: %c\n", ft_toupper(m));
}*/
