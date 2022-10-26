#include "libft.h"

/* Copies n bytes from memory area src to memory area dst. Returns a pointer to
destination (dst). The memory area of dst should be large enough to hold n
bytes from memory area src. n should be smaller than destination array.
Overlap is not handled correctly, ft_memmove() should be used then. */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
