/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:42:59 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 21:20:38 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function iterates the list ’lst’ and applies the function
* ’f’ on the content of each node.
*	Takes two arguments: the address of a pointer to a node.
* The address of the function used to iterate on the list. */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

/* #include <stdio.h>
void print_content(void *content)
{
    printf("%s\n", (char*)content);
}

int main(void)
{
    t_list *list = ft_lstnew("hello");
    ft_lstadd_back(&list, ft_lstnew("world"));
    ft_lstiter(list, &print_content);
    return (0);
} */