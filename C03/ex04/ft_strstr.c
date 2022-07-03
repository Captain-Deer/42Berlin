/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 19:18:06 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/01 19:18:53 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		c;

	i = 0;
	c = 0;
	if (to_find[c] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
			c++;
		if (to_find[c] == '\0')
			return (str + i);
		i++;
		c = 0;
	}
	return (0);
}

/*int main(int ac, char **av)
{
	(void)ac;
	char *str;
	str = ft_strstr(av[1],av[2]);
	printf("%s",str);
}
*/
