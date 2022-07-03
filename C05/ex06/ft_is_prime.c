/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:57:36 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/03 16:12:50 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
int	ft_is_prime(int nb)
{	
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{ 
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(10));
}*/
