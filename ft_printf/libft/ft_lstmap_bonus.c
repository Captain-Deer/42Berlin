/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:44:09 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 21:16:42 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function is used to apply a function to each element of a linked list and 
* create a new linked list from the results.
* It takes as input a pointer to the head of the linked list, a function that 
* is applied to the content of each element, and a function that is used to 
* delete the content of the elements. The function returns a pointer to the 
* head of the new linked list. s*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*end;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (0);
	end = new;
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		end->next = tmp;
		end = tmp;
		lst = lst->next;
	}
	return (new);
}

/* #include <stdio.h>

void *square(void *elem)
{
    int *sq = malloc(sizeof(int));
    *sq = (*((int*)elem)) * (*((int*)elem));
    return (sq);
}

int main(void)
{
    t_list *lst = malloc(sizeof(t_list));
    lst->content = malloc(sizeof(int));
    *((int*)lst->content) = 2;
    lst->next = malloc(sizeof(t_list));
    lst->next->content = malloc(sizeof(int));
    *((int*)lst->next->content) = 3;
    lst->next->next = NULL;


    t_list *result = ft_lstmap(lst, square, free);

    t_list *curr = result;
    while (curr != NULL)
    {
        printf("%d\n", *((int*)curr->content));
        curr = curr->next;
    }

    ft_lstclear(&result, free);
    ft_lstclear(&lst, free);

    return 0;
} */