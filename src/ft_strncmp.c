#include "libft.h"

/* Compares lexicographically s1 and s2 but not more than n characters.
Characters that appear after null-terminator are not compared. Returns an int
greater than, equal to or less than 0 according if s1 is greater than, equal
to or less than string 2. */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i])
	{
		if (i + 1 == n)
			break ;
		if (s1[i + 1] == '\0' || s2[i + 1] == '\0')
			return ((unsigned char)s1[i + 1] - (unsigned char)s2[i + 1]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
