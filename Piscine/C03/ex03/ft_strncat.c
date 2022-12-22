/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 19:16:25 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/01 19:17:30 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest1;
	unsigned int	i;

	dest1 = dest;
	i = 0;
	while (*dest1)
		dest1++;
	while (i < nb && *src)
	{
		*dest1 = *src;
		dest1++;
		src++;
		i++;
	}
	*dest1 = '\0';
	return (dest);
}

/*
int	main(int ac, char **av)
{
	char			*src;
	char			*dest;
	unsigned int	n;

	(void) ac;
	dest = av[1];
	src = av[2];
	n = 3;
	dest = ft_strncat(dest, src, n);
	while (*dest)
	{
		printf("%c", *dest);
		dest++;
	}
	return (0);
}
*/
