/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:23:16 by khammers          #+#    #+#             */
/*   Updated: 2021/08/03 14:42:36 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prototype: char	*ft_strnstr(const char *haystack, const char *needle,
**			  size_t len)
**
** The strnstr() function locates the first occurrence of null-terminated string
** needle in the string haystack, where not more than len characters are
** searched. Character that appear after a null character are not searched. If
** needle is an empty string, haystack is returned, if needle does not exist in
** haystack, NULL is returned. Otherwise a pointer to the first character of the
** first occurrence of needle is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
