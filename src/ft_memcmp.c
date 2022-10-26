#include "libft.h"

/* Compares byte string s1 against byte string s2. Both strings are assumed to
be n bytes long. Returns 0 if strings are identical, otherwise the difference
between the first two differing bytes (treated as unsigned char values). */
int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t	i;
	int		dif;

	i = 0;
	dif = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
		{
			dif = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
			return (dif);
		}
		i++;
	}
	return (0);
}
