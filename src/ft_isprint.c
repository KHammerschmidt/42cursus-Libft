#include "libft.h"

/* Checks if the int parameter is a printable character, ASCII value
between 32 and 126, otherwise returns 0.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
