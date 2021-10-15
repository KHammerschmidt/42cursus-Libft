/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:04:55 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:32:05 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function allocates with malloc a new string which is the result of the
** concatenation of s1 and s2. s1 is the prefix string and s2 the suffix string.
** Which means that s2 is being concatenated on to s1. The function returns the
* new string or NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strnw;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1)
		return (0);
	strnw = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (strnw == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		strnw[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strnw[i] = s2[j];
		i++;
		j++;
	}
	strnw[i] = '\0';
	return (strnw);
}
