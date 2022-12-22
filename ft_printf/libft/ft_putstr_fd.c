/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:51:20 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 12:49:14 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function used to output a string to a file or to a device such as a */
/* terminal takes two arguments: A pointer to the string to be written; */
/* The file descriptor of the file to which the string should be written */
/* function uses the file descriptor 1 to identify the standard output */
/* stream, so the string is written to the terminal.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

/*#include <unistd.h>

int main(void)
{
	char *str;

	str = "Hello, world!";
	ft_putstr_fd(str, 1);

	return (0);
}*/
