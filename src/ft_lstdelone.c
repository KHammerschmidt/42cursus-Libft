#include "../header/libft.h"

/* Frees the memory of the elements content and the element itself. */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
}
