#include "libft.h"

/* Canges all letters into lowercase letters. */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
