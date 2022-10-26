#include "libft.h"

/* Outputs character (c) to the given file desriptor. */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
