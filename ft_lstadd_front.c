/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:42:58 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:29:47 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds elemenet new at the beginning of the list. 
** **lst: address of a pointer to the first link of a list. 
** *new: address of a pointer to the element to be added to the list.
**
** (1) if any parameter list is empty return nothing.
** (2) the pointer to the next element of 'new' (new->next) points to the
** previous first element of '*lst'
** (3) pointer to the first link of a list '*lst' then points to the 'new'
** element which has been added to the front of the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
