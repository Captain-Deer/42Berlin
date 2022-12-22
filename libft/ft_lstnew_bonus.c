/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:44:43 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 15:36:00 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function creates a new linked list element. The function takes a single 
* parameter, which is a void pointer to the data that 
* the new element will contain. function returns a pointer to the new element,
* or NULL if the element could not be created.*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->next = 0;
	new->content = content;
	return (new);
}

/* #include <stdio.h>
int main(void)
{
	t_list *list = NULL;
	t_list *element;
	int data[] = {1, 2, 3, 4, 5};
	int i = 0;

	while (i < 5)
	{
		element = ft_lstnew(&data[i]);
        element->next = list;
        list = element;
		i++;
    }
    while (list != NULL)
    {
        printf("%d\n", *(int*)list->content);
        list = list->next;
    }
    return (0);
} */
