/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:39:48 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 15:54:40 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function adds the element ’new’ at the beginning of the list.
*   Takes two parameters: the address of a pointer to the first link of a list.
*	The address of a pointer to the element to be added to the list. */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{	
		if (!lst)
			*lst = new;
		new->next = *lst;
		*lst = new;
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
        ft_lstadd_front(&list, element);
		i++;
    }
    while (list != NULL)
    {
        printf("%d\n", *(int*)list->content);
        list = list->next;
    }

    return 0;
} */