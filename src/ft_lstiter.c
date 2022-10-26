#include "../header/libft.h"

/* Iterates the list 'lst' and applies the function 'f' to the content of each
element. */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
