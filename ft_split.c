/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:23:56 by katharinaha       #+#    #+#             */
/*   Updated: 2021/10/15 14:31:46 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc and returns an array of strings obtained by splitting
** ‘s’ using the character ‘c’ as delimiter. The array must be ended by a NULL
** pointer. The return value is the array of new strings resulting from the
** split or NULL if the allocation fails.
**
** (1) **array[] is allocated memory space; the size of the string is defined
** by counting the number of substrings to be created by calling ft_counter();
** (2) ft_counter() loops though the string (i++) until it reaches its end,
** (2a) if a character different than c is found the if statement s!=c comes
** true: the count variable counts the first character of each substring that
** is going to be created, therefore counting the number of substrings;
** (2b) i is decreased by one to be incremented after the if statement;
** (2c) the function returns the count variable, e.g. the number of
** substrings to be created;
** (3) while s!=0: while s is equal to c and s!=0 the start-counter of the
** substring is incremented, if no delimiter is found in s the while loop
** breaks;
** (4) stop value by calling ft_get_stop(): stop is assigned to the value of
** start and incremented until s==c; value of stop is returned;
** (5) start and stop of substring are known:  the new string is created by
** calling ft_substr() and stored in array[index]; index++;
** (6) the start point of the next substring is the stop of the last
** (7) if stop is larger than the length of s, the while loop breaks;
** (8) the last position of the array is set to 0 and the **char returned;
*/
static int	ft_counter(char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
			i--;
		}
		i++;
	}
	return (count);
}

static size_t	ft_get_stop(char *s, char c, int *start)
{
	size_t	stop;

	stop = *start;
	while (s[stop] != c && s[stop] != '\0')
		stop++;
	return (stop);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		index;
	int		start;
	size_t	stop;

	start = 0;
	index = 0;
	if (!s)
		return (0);
	array = (char **)malloc(sizeof(char *) * (ft_counter((char *)s, c) + 1));
	if (array == NULL)
		return (0);
	while (s[start] != '\0')
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		if (s[start] == '\0')
			break ;
		stop = ft_get_stop((char *)s, c, &start);
		array[index] = ft_substr(s, start, stop - start);
		index++;
		start = stop;
	}
	array[index] = 0;
	return (array);
}
