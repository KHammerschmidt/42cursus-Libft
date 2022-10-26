#include "libft.h"

/* Function to free char pointer and setting allocated area to NULL. */
void	ft_free(char **char_stat)
{
	free(*char_stat);
	*char_stat = NULL;
}
