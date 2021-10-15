/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:39:11 by khammers          #+#    #+#             */
/*   Updated: 2021/08/03 14:40:12 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prototype: void *ft_memcpy(void *dst, void *src, size_t n);
**
** The function ft_memcpy() copies n bytes from memory area src to memory area
** dst. Both pointers are of type void. The function returns a pointer to
** destination (dst). The memory area of dst should be large enough
** to hold n bytes from memory area src. n should be smaller than destination
** array. Overlap is not handled correctly, ft_memmove() should be used then.
**
** (1) it is checked if the strings src & dst exist/if there is memory space
** to which they point;
** (2) while the number of bytes to be copied aren't copied yet (i < n), the
** value of src is copied to dst, typecasted as char/const char
** (3) the function stops when n bytes are copied and returns a pointer to
** the original value of dst.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
