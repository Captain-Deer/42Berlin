/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:42:41 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 21:26:11 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Takes as a parameter a node and frees the memory of
* the node’s content using the function ’del’ given
* as a parameter and free the node. The memory of
* ’next’ must not be freed.*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{	
		del(lst->content);
		free(lst);
	}
}

/* does not work */
/* #include <stdio.h> 
int main(void)
{
    t_list *list = NULL;
    t_list *element1 = ft_lstnew("hello");
    t_list *element2 = ft_lstnew("world");

    ft_lstadd_back(&list, element1);
    ft_lstadd_back(&list, element2);

    ft_lstdelone(element1, free);
    printf("After delete: %s\n", (char*)list->content);

    return (0);
} */