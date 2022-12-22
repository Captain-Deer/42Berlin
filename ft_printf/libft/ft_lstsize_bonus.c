/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:45:22 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 20:26:39 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Function counts the number of elements in a list.
*	Takes as a parameter the beginning of the list.
*	Returns the length of the list */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/* #include <stdio.h>
int main(void)
{
	t_list *list = NULL;
    
	list = ft_lstnew("Hello");
	ft_lstadd_front(&list, ft_lstnew("World"));
	ft_lstadd_front(&list, ft_lstnew("!"));

	printf("The size of the list is: %d\n", ft_lstsize(list));
} */
/* if next = NULL that means that it is the last element in the list*/