/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:09:15 by khammers          #+#    #+#             */
/*   Updated: 2021/08/03 21:47:07 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** Prototype: void	*ft_memchr(const void *s, int c, size_t n);
**
** The function ft_memchr() locates the first occurence of c (converted to an
** unsigned char) in string s. The function returns a pointer to the byte
** located or NULL if no such byte exists. No more than n characters are
** searched.
**
** (1) while the searched position is not reached yet (i<n), counter is
** incremented. If c is found, this respective position in s, is returned,
** typecasted to a char pointer.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
