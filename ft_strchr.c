/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 08:32:39 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:31:52 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_strchr() locates the first occurence of c, the character to
** be searched in str (converted to an unsigned char) pointed to by the argument
** s. The termianting null character is considered to be part of the string;
** therefore if c is '\0', the function locates the terminating '\0'. The
** function returns a pointer to the (first occurence) located character, or
** NULL if the character does not appear in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c && s[i] != '\0')
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	else
		return (NULL);
}


