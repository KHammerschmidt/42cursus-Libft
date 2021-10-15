/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:16:47 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:29:30 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the last element of the list.
**
** (1) if the list is empty return NULL;
** (2) while we are not at the end of the list: we iterate through the list
** by assigning lst the pointer to the next element;
** (3) if the next element is the last one (lst->next = NULL) we return this
** element, alias the last element of the last. 
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
