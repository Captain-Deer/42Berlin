/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:37:03 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 21:18:45 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the element ’new’ at the end of the list.
*	Takes two arguments: the address of a pointer to the first link of a list.
*	the address of a pointer to the element to be added to the list.*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_lst;

	if (new)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		new_lst = ft_lstlast(*lst);
		new_lst->next = new;
	}
}

/* #include <stdio.h>
int main(void)
{
    t_list *list = NULL;
    int data[] = {1, 2, 3, 4, 5};
    int i;

    while (i < 5)
    {
        t_list *element;

        element = ft_lstnew(&data[i]);
        ft_lstadd_back(&list, element);
		i++;
    }
    while (list != NULL)
    {
        printf("%d\n", *(int*)list->content);
        list = list->next;
    }

    return (0);
} */
