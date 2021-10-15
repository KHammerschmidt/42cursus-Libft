/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:26:18 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:30:53 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_memset() writes (len) bytes of value (c) to the memory block
** pointed to by *b. The value of c is passed as an int, but ft_memset fills the
** block of memory using the unsigned char (8- bit unsigned integer ranging from
** 0 to 255) conversion of this value. Therefore the pointer is being typecasted
** to an unsigned char pointer ((unsigned char *) b). The function returns the
** pointer to the memory area of it's first argument, void *b.
**
** (1) while loop: while the number of bytes aren't filled yet (i<len) the
** value of c (converted to an unsigned char) is written to the memory block of
** *b (converted to an unsigned char), counter i is incremented.
** (2) function stops when len bytes are filled.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
