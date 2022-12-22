/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:49:49 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 21:51:32 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Functiom allocates (with malloc) and returns a string representing the 
* integer received as an argument. Negative numbers must be handled.
*	Takes as parameter the integer to convert.
*	Returns the string representing the integer. NULL if the allocation fails.*/

#include "libft.h"

static void	ft_isneg(int *n, int *neg, int *tmp)
{
	if (*n == -2147483648)
	{
		*n = *n + 1;
		*neg = -1;
		*tmp = 1;
		*n = *n * -1;
	}
	else if (*n < 0)
	{
		*neg = -1;
		*n = *n * -1;
		*tmp = 0;
	}
	else if (*n >= 0)
	{
		*neg = 1;
		*tmp = 0;
	}
}

static int	ft_itoa_len(int n)
{
	int	len;

	len = 0;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

static void	ft_itoa_write(char *str, int len, int n, int tmp)
{
	while (n > 9)
	{
		str[len--] = (n % 10) + '0' + tmp;
		n = n / 10;
		tmp = 0;
	}
	str[len] = n + '0';
}

char	*ft_itoa(int n)
{
	int		neg;
	int		tmp;
	int		len;
	char	*str;

	ft_isneg(&n, &neg, &tmp);
	len = ft_itoa_len(n);
	if (neg == -1)
	{
		str = malloc((len + 2) * sizeof(char));
		if (!str)
			return (0);
		len++;
		str[0] = '-';
	}
	else
	{
		str = malloc((len + 1) * sizeof(char));
		if (!str)
			return (0);
	}
	str[len--] = '\0';
	ft_itoa_write(str, len, n, tmp);
	return (str);
}

/* function first calculates the number of digits in the integer by repeatedly 
* dividing the integer by 10 until it is reduced to 0. It then allocates 
* sufficient memory for the character string representation of the integer, 
* including space for a sign character if the integer is negative. The function 
* then populates the character string by extracting the least significant digit 
* of the integer and adding it to the character string, until the integer is 
* reduced to 0. Finally, the function returns a pointer to the string*/

/* #include <stdio.h>
int main(void)
{
	int	i;
	int	m;
	int	s;

	i = 42;
	m = -2147483648;
	s = 2147483647;

	printf("str1 = %s\n", ft_itoa(i));
	printf("str2 = %s\n", ft_itoa(m));
	printf("str2 = %s\n", ft_itoa(s));
	return (0);
} */