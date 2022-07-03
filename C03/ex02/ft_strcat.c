/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:07:31 by akrikuno          #+#    #+#             */
/*   Updated: 2022/06/30 23:09:57 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	char	*hdest;

	hdest = dest;
	while (*hdest)
		hdest++;
	while (*src)
	{
		*hdest = *src;
		hdest++;
		src++;
	}
	*hdest = '\0';
	return (dest);
}

/*int main(int ac, char **av)
{
	char *src;
	char *dest;
	(void) ac;
	dest = av[1];
	src = av[2];

	dest =ft_strcat(dest, src);

	while(*dest)
	{
		printf("%c",*dest);
		dest++;
	}
}
*/
