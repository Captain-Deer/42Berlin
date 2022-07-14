/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:28:43 by akrikuno          #+#    #+#             */
/*   Updated: 2022/07/02 18:31:02 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	check_neg(int res, int n)
{
	if (n % 2 == 0)
		return (res);
	else
		return (res * -1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	n;

	n = 0;
	res = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			if (str[i + 1] == ' ')
				break ;
			else
				n++;
		}
		else if (is_num(str[i]))
		{
			res = res * 10 + str[i] - '0';
			if (!is_num(str[i + 1]))
				break ;
		}
		i++;
	}
	return (check_neg(res, n));
}

/*int	main(int argc, char **argv)
{
	if (argc)
		printf("%d\n", ft_atoi(argv[1]));
}*/
