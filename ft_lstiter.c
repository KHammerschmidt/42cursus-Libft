/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:28:57 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:29:33 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates the list 'lst' and applies the function 'f' to the content of each
** element.
**
** (1) if any parameter if empty return nothing;
** (2) while we are not at the end of the list: function f is applied to the
** content of element
** (3) and it is iterated through the list by assigning lst to the pointer to
** the next element. 
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
