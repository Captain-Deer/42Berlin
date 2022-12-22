/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:41:44 by akrikuno          #+#    #+#             */
/*   Updated: 2022/12/18 21:17:42 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Deletes and frees the given node and every successor of that node, using 
* the function ’del’ and free(3). Finally, the pointer to the list must be set 
* to NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new_lst;

	if (*lst)
	{
		while (*lst)
		{
			new_lst = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = new_lst;
		}
		*lst = 0;
	}
}

/* does not work*/
/* #include <stdio.h>
int main(void)
{
    t_list *list = NULL;
    t_list *element1 = ft_lstnew("hello");
    t_list *element2 = ft_lstnew("world");

    ft_lstadd_back(&list, element1);
    ft_lstadd_back(&list, element2);

	ft_lstclear(&list, &free);
} */