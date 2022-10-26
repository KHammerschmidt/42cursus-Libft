#include "libft.h"

/* Copies up to dstsize - 1 characters from string src to dst, NULL terminating
dst if dstsize is not 0. The function returns the length of the string it tried
to create (ft_strlen(src)). If this return value is larger than dstsize, dst
has been truncated. */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
