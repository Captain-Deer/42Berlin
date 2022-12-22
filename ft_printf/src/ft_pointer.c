/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:01:52 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/22 20:51:16 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_ptr_len(unsigned long int num)
{
	size_t	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long int num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long int ptr)
{
	unsigned long	ptr_address;
	size_t	print_length;

	print_length = 0;
	ptr_address = (unsigned long)ptr;
	if (ptr == 0)
		print_length += ft_printstr("(nil)");
	else
	{
		print_length += write(1, "0x", 2);
		ft_put_ptr(ptr_address);
		print_length += ft_ptr_len(ptr_address);
	}
	return (print_length);
}
