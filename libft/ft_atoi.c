/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:47:00 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 21:38:25 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Man: function converts a string to an integer*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	pos;

	i = 0;
	res = 0;
	pos = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pos *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * pos);
}

/* #include <stdio.h>
int main(void)
{
	char	*str;

	str = "42";
	printf("int = %d\n", ft_atoi(str));
	return (0);
} */
