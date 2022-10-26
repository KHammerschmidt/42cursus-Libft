#include "libft.h"

/* Checks if the parameter is either a digit or a letter (upper- & lowercase).
If 'int' is none of those returns 0, otherwise 1. */
int	ft_isalnum(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}
