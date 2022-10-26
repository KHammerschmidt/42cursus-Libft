#include "libft.h"

/* Locates the last occurence of c in the string pointed to by s. Returns a
pointer to the located character or NULL if it does not appear in s. */
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
