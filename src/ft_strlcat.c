#include "libft.h"

/* Appends string src to the end of dst. Will append at most
(dstsize - ft_strlen(dst) - 1) characters. It will NULL-terminate, unless
dstsize is 0 or the original dst string was longer. Dstsize should include
space for null terminator. Returns the length of the string it tried to create.
This means the initial length of  dst plus the length of src. If the return
value is >=dstsize, the output string has been truncated. */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0 || (dst_len >= dstsize))
		return (dstsize + src_len);
	while (src[i] != '\0' && (i < (dstsize - dst_len - 1)))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
