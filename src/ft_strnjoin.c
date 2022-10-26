#include "libft.h"

// ============ prerequisite for get_next_line project ============

/* Function appends one string onto another. */
char	*ft_strnjoin(char *s1, char *s2, ssize_t bytes)
{
	char	*strnw;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 != NULL)
		bytes = ft_strlen(s1);
	strnw = (char *)ft_calloc((bytes + ft_strlen(s2) + 1), sizeof(char));
	if (strnw == NULL)
		return (NULL);
	while (s1 && s1[i] != '\0')
	{
		strnw[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] != '\0')
		strnw[i++] = s2[j++];
	if (s1)
		ft_free(&s1);
	return (strnw);
}