/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:32:13 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:30:24 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_bzero() writes n zeroed bytes ('\0' or 0) the the string s.
** If n is zero, ft_bzero() does nothing. It is used to set memory space to null
** values. The function has no return value.
**
** While the number of bytes 'n' to be filled are not filled yet (i < n),
** zeroed bytes are written to the memory block of typecasted string 's'.
*/
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
