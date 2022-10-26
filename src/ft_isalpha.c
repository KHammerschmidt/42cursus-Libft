#include "libft.h"

/* Checks if the int parameter is a upper- or lowercase letter, otherwise
returns 0. */
int	ft_isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	return (0);
}
