#include "libft.h"

/* Changes all letters into uppercase letters. */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
