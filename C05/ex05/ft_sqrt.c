/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:52:32 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/03 16:12:28 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	while ((sqr * sqr) < nb)
		sqr += 1;
	if ((sqr * sqr) == nb)
		return (sqr);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(5));
}*/
