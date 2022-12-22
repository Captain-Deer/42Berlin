/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:43:44 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 21:21:20 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function returns the last node of the list*/
/* Good to use for adding content to the end of the list */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* #include <stdio.h>
int main(void)
{
	t_list *list;
	t_list *last;
    
	list = ft_lstnew("Hello");
	ft_lstadd_front(&list, ft_lstnew("World"));
	ft_lstadd_front(&list, ft_lstnew("!"));
	last = ft_lstlast(list);

	printf("The last element in the list is: %s\n", (char *)last->content);
} */	
