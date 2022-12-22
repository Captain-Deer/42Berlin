/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:50:50 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 12:44:37 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function writes a single character to a file descriptor. 
* It takes two arguments: char c: the character to be written
* int fd: the file descriptor to which the character should be written.
* File descriptors: 0 - stdin, 1 - stdout, 2 - stderr */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* #include <stdio.h>
int	main(void)
{
	ft_putchar_fd('a', 1);
	ft_putchar_fd('b', 1);
	ft_putchar_fd('c', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/