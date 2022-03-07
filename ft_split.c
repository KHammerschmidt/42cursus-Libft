/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:23:56 by katharinaha       #+#    #+#             */
/*   Updated: 2022/03/07 17:47:54 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Counts the number of substrings that will be splitted. */
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

/* Returns the end of the substring to be splitted. */
static size_t	ft_get_stop(char *s, char c, int *start)
{
	size_t	stop;

	stop = *start;
	while (s[stop] != c && s[stop] != '\0')
		stop++;
	return (stop);
}


/* Returns an array of strings obtained by splitting ‘s’ using the 
character ‘c’ as delimiter. The return value is the array of new strings 
resulting from the split or NULL if the allocation fails. */
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
	array = (char **)ft_calloc(sizeof(char *), (ft_counter((char *)s, c) + 1));
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
