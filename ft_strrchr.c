/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 11:12:27 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:33:01 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_strrchr() locates the last occurence of c (converted to a
** char) in the string pointed to by s. The terminating null character is con-
** sidered to be part of the string, therefore if c is '\0', the function
** locates the terminating '\0'. The function returns a pointer to the located
** character or NULL if the character does not appear in the string.
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (c == '\0')
		return (&((char *)s)[i]);
	while (i > 0)
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i--;
	}
	if (s[0] == (unsigned char)c)
		return (&((char *)s)[0]);
	return (0);
}
