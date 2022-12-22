/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:55:48 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/22 19:24:33 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		len;

	len = 0;
	if (n == -2147483648)
	{
		len += ft_printnbr((n / 10));
		len += ft_printchar('8');
	}
	else if (n < 0)
	{
		len += ft_printchar('-');
		len += ft_printnbr(-n);
	}
	else 
	{
		if (n > 9)
			len += ft_printnbr(n / 10);
		len += ft_printchar('0' + n % 10);
	}
	return (len);
	
}






int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}