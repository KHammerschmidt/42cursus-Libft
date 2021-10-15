/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:16:20 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:33:27 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_strtrim() trims a string (char const *s1) in regards to a
** reference set (char const *set). Thereby the occurence of every single
** character of the string (set), no matter it's order, is being removed at the
** beginning and the end of s1. The return value is NULL if the allocation fails
** or the trimmed copy of s1 (char *cpys). There is being memory space allocated
** to cpys by using the function malloc().
**
** ft_strtrim() is divided into three subfunctions:
** - ft_strlen() identifies the length of a string,
** - ft_get_trm_start_stop() helps to identify the position at the beginning and
**   end of the trim (start_trm and stop_trm);
** - ft_cpys_trm() copies the relevant characters from s1 to cpys.
**
** (1) While loop of ft_strtrm(): while ft_get_trm_start_stop() finds any
** character of set[j] in s1[counter], the function returns (1) until the
** start of the string that is to be copied is being found (at start_trm).
** (2) In order to identify stop_trm, the while looped starts at the end of s1
** and loop through it until set[j] cannot be found anymore in s1.
**
** (3) ft_cpy_trm: the function only allocates enough memory space to hold a
** copy of the trimmed s1 version, leaving space for the null terminator.
*/
static int	ft_get_trm_start_stop(const char *s1, const char *set, int counter)
{
	size_t	j;

	j = 0;
	while (set[j] != s1[counter] && set[j] != '\0')
		j++;
	if (set[j] == s1[counter])
		return (1);
	return (0);
}

static char	*ft_cpy_trm(char const *s1, int start_trm, int stop_trm)
{
	char	*cpys;
	int		i;

	i = 0;
	cpys = malloc(((stop_trm - start_trm) + 2) * sizeof(char));
	if (cpys == NULL)
		return (NULL);
	while (i <= (stop_trm - start_trm))
	{
		cpys[i] = s1[start_trm + i];
		i++;
	}
	cpys[i] = '\0';
	return (cpys);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	int		start_trm;
	int		stop_trm;
	char	*cpys;

	i = 0;
	k = 0;
	if (!s1)
		return (0);
	while (ft_get_trm_start_stop(s1, set, i) == 1 && s1[i] != '\0')
		i++;
	start_trm = i;
	k = ft_strlen(s1);
	if (start_trm == k)
	{
		cpys = malloc(1);
		cpys[0] = '\0';
		return (cpys);
	}
	while (ft_get_trm_start_stop(s1, set, k) == 1)
		k--;
	stop_trm = k;
	cpys = ft_cpy_trm(s1, start_trm, stop_trm);
	return (cpys);
}
