/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:52:02 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 12:55:37 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function writes an integer to a file descriptor. It takes two arguments:
*   int n: the integer to be written
*   int fd: the file descriptor to which the integer should be written*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			ft_putnbr_fd(147483648, fd);
			return ;
		}
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
}

/* f n is negative, it writes a minus sign to the file descriptor and then 
* converts n to its absolute value. 
* It then divides n by 10 and writes the remainder to the file descriptor using 
* the ft_putchar_fd function. It repeats this process until n is less than 10, 
* at which point it writes the final digit of n to the file descriptor.*/

/* #include <stdio.h>
int main(void)
{
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-12345, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
} */