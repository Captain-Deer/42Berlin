/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:51:43 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 12:48:29 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function writes a string to a file descriptor, followed by a newline 
* character. It takes two arguments: char *s: a pointer to the string to be 
* written; int fd: the file descriptor to which the string should be written */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/* #include <stdio.h>
int	main(void)
{
	ft_putendl_fd("This is a test", 1);
	ft_putendl_fd("Another test", 1);
	ft_putendl_fd("Hello, world!", 1);
	return (0);
} */