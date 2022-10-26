#include "libft.h"

/* Returns a substring from string s. The substring begins at start and is of
maximum size len. */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
