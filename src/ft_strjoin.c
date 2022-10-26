#include "libft.h"

/* Concatenates s1 and s2. */
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
