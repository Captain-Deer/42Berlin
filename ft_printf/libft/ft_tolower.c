/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:42:25 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/09 19:09:08 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function returns an uppercase letter as a lowercase letter */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		i += 32;
	return (i);
}

/*#include <stdio.h>
int main(void)
{
	char m;
	m = 'B';
	printf("should be b: %c\n", ft_tolower(m));
}*/
