#include "../header/libft.h"

/* Adds elemenet new at the beginning of the list. */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
