#include "libft.h"

/* Checks if the int parameter is represented by an ASCII value, returns 0
if not. */
int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}
