/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:20:46 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:29:50 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element 'new' at the end of the list. 
** **lst: address of a pointer to the first link of a list. 
** *new: the address of a pointer to the first element to be added to the list.
**
** (1) if any parameter is empty return nothing.
** (2) if the element '*lst' is empty, *lst points to the 'new' element,
** adding it to the list.
** (3) else: the pointer to the last element of '*lst' is saved in t_list 'temp'
** by calling ft_lstlast()
** (4) temp's pointer to the next element is set to the new list '*new' to add
** it to the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}
