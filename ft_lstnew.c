/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:01:40 by khammers          #+#    #+#             */
/*   Updated: 2021/08/03 18:07:51 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prototype: t_list	*ft_lstnew(void *content):
**
** Allocates with malloc and returns a new element. The variable content is
** initialized with the value of the parameter content. The variable next is
** initialized to NULL. The new element is returned.
**
** (1) we assign memory space for the new element with the size of our list
** t_list. If the allocation failed we return 0.
** (2) the content of the element is initatialised with the value of the
** parameter,
** (3) the pointer to the next element is set to NULL, indicating it's the
** end of the list.
** (4) the new element is returned.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (element == NULL)
		return (0);
	element->content = content;
	element->next = NULL;
	return (element);
}
