/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:22:58 by khammers          #+#    #+#             */
/*   Updated: 2021/08/03 17:57:56 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prototype: void	ft_lstdelone(t_list *lst, void (*del)(void *));
**
** Takes as a parameter an element and frees the memory of the element's
** content using the function 'del' given as a parameter and free the element.
** The memory of 'next' must not be freed.
**
** (1) if any parameter is empty return nothing;
** (2) function del is applied to the content of the element lst
** (lst->content) and the element freed afterwards.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
}
