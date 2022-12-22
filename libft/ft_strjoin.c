/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:49:00 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 13:11:55 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Takes two arguments: pointer to the first string to be concatenated;*/
/* pointer to the second string to be concatenated */
/* Returns a pointer to the new concatenated sting or NULL if */
/* it was unable to allocate memory */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	tot_len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	tot_len = s1_len + s2_len + 1;
	str = malloc(sizeof(char) * tot_len);
	if (!str)
		return (0);
	ft_memmove(str, s1, s1_len);
	ft_memmove(str + s1_len, s2, s2_len);
	str[tot_len - 1] = '\0';
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	char *s1;
	char *s2;
	char *s3;

	s1 = "Hello, ";
	s2 = "world!";
	s3 = ft_strjoin(s1, s2);
	printf("The first string is: %s\n", s1);
	printf("The second string is: %s\n", s2);
	printf("The concatenated string is: %s\n", s3);
	free(s3);
	return (0);
} */
