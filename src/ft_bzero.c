#include "libft.h"

/* Writes n zeroed bytes the the string s. It is used to set memory space to null values. */
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
