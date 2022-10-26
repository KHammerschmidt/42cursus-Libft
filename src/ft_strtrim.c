#include "libft.h"

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

/* Trims a string in regards to a reference set. Occurence of every single
character of the string (set), no matter it's order, is being removed at the
beginning and the end of s1. The return value is NULL if the allocation fails
or the trimmed copy of s1 (char *cpys). */
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
	cpys = ft_substr(s1, start_trm, stop_trm - start_trm + 1);
	return (cpys);
}
