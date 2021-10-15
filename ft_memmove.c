/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:00:24 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:30:42 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_memmove() copies len bytes from string src to string dst. The
** two strings may overlap; the copy is always done in a non-destructive manner.
** The function returns the original value of dst.
**
** (1) Two char pointers to the function's void pointers are casted;
** (2) if dst string is larger than src string: src is copied to dst starting at
** the string's end;
** (3) id dst is smaller than src (i<len) the copy starts at the beginning of
** src;
** (4) the function returns the original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	if (src == NULL && dst == NULL)
		return (dst);
	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
