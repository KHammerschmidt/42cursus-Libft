/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:54:09 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:32:48 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_strncmp() compares lexicographically the null-terminated
** strings s1 and s2 but not more than n characters. Characters that appear
** after null-terminator are not compared. The function returns an integer
** greater than, equal to or less than 0, according as s1 is greater than,
** equal to or less than string 2. Comparison is done using unsigned
** characters.
** (1) if n=0 return 0;
** (2) loop through the strings while they are equal;
** (3) if the next iteration (i+1==n) is equal to n, the loop is stopped (as i
** n characters are compared then);
** (4) if (i+1='\0') the difference between the next position in the string
** is returned (as otherwise the function jumps out of the while loop too
** early);
** (5) the difference between the strings i returned;
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i])
	{
		if (i + 1 == n)
			break ;
		if (s1[i + 1] == '\0' || s2[i + 1] == '\0')
			return ((unsigned char)s1[i + 1] - (unsigned char)s2[i + 1]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
