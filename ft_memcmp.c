/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:35:49 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:29:15 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_memcmp() compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long. Function returns zero if both
** strings are identical, otherwise the difference between the first two
** differering bytes (treated as unsigned char values).
**
** (1) if n=0 0 is returned as there are 0 positions to compare;
** (2) while the strings are not at their end (i<n) the counter is incremented.
** If both strings differ at any position the difference (dif) of both strings,
** typecasted as unsigned char, are returned.
*/
int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t	i;
	int		dif;

	i = 0;
	dif = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
		{
			dif = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
			return (dif);
		}
		i++;
	}
	return (0);
}
