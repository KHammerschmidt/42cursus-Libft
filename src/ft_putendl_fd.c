#include "libft.h"

/* Outputs a string (s) to the given file descriptor, followed by a new line. */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
