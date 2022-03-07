/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:09:15 by khammers          #+#    #+#             */
/*   Updated: 2022/03/07 17:40:16 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Locates the first occurence of c (converted to an unsigned char) in 's'.
The function returns a pointer to the byte located or NULL if no such byte
exists. No more than n characters are searched. */
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
