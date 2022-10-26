#include "../header/libft.h"

/* Allocates with malloc and returns a new element. The variable content is
** initialized with the value of the parameter content. The variable next is
** initialized to NULL. The new element is returned. */
t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (element == NULL)
		return (0);
	element->content = content;
	element->next = NULL;
	return (element);
}
