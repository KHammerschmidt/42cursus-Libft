/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:23:26 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:29:43 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes and frees the given element and every successor of that element,
** using the function 'del' and free(3). Finally, the pointer to the list must
** be set to NULL.
**
** (1) if any paramter is empty return nothing;
** (2) while lst & *lst are not at the end of the list yet: the pointer to
** the next element of lst (*lst->next) is saved in 'temp',
** (3) the function ft_lstdelone() is applied to the content of *lst and
** the function 'del' passed on.
** (4) to iterate through the string '*lst' points to 'lst->next' which
** was saved in temp;
** (5) when the while loop ends *lst is set to NULL to indicate the end
** of the list.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst || !lst || !*del)
		return ;
	while (lst && *lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
