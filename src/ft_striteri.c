#include "libft.h"

/* Applies the function f to each character of the string passed as argument,
and passing its index as first argument. Each character is passed by addres
to f to be modified if necessary. */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
