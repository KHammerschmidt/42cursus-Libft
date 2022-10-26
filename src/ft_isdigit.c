#include "libft.h"

/* Checks if the int parameter is a number between 0-9, otherwise returns 0. */
int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
