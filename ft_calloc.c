/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:50:00 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:30:20 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_calloc() allocates enough space for 'count' objects that are
** 'size' bytes of memory each and returns a pointer to the allocated memory.
** The allocated memory is filled with bytes of value zero.
**
** (1) allocate memory space of size (counter * size), return (0) if allocation
** fails;
** (2) call function ft_bzero() to write zeroed bytes to memory space to
** which the int pointer 'ptr' points to and return the pointer.
*/
void	*ft_calloc(size_t count, size_t size)
{
	int	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
