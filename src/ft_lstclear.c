#include "../header/libft.h"

/* Deletes and frees the given element and every successor of that element,
using the function 'del' and free(3). Finally, the pointer to the list must
be set to NULL. */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst || !lst || !*del)
		return ;
	while (lst && *lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
