/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:49:34 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/19 13:39:35 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_split splits a string into an array of substrings based on 
* a specified delimiter character. It takes two arguments:
*    char const *s: a pointer to the string to be split
*   char c: the delimiter character */

#include "libft.h"

static int	ft_count(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2)
			return (0);
		ft_putword(s2[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = ft_count(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (0);
	ft_split_words(s, c, s2, num_words);
	return (s2);
}

/* ft_count counts the number of words in the string s, where a word is defined 
* as a sequence of non-delimiter characters. After I am returning words. 
* Then I am allocating memory for an array of pointers to string using malloc. 
* And in the end ft_split scans the string, and creates the copy of it, 
* delimited by the delimiter */

/* #include <stdio.h>
int main(void)
{
	char	**result;
	int		i;

	result = ft_split("This_is_a_test", '_');
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);

	result = ft_split("Another,test", ',');
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
} */