/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:19:02 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/03 16:11:31 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}
/*
int main(void)
{
	printf("%d\n", ft_recursive_power(2, 3));
}*/
