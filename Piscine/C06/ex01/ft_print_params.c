/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:30:14 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/03 16:43:41 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	c;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			c = 0;
			while (argv[i][c] != '\0')
				ft_putchar(argv[i][c++]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
