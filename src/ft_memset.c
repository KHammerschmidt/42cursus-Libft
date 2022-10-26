#include "libft.h"

/* Writes (len) bytes of value (c) to the memory block pointed to by *b.
Returns pointer to the memory area of it's first argument, void *b. */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
