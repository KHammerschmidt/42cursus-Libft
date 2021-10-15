/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:32:13 by khammers          #+#    #+#             */
/*   Updated: 2021/08/03 15:11:09 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prototype: void ft_bzero(void *s, size_t n);
**
** The function ft_bzero() writes n zeroed bytes (('\0') or 0) the the string s.
** If n is zero, ft_bzero() does nothing. It is used to set memory space to null
** values. The function has no return value.
**
** While the number of bytes 'n' to be filled are not filled yet (i < n),
** zeroed bytes (('\0') or 0) are written to the memory block of the typecasted
** char pointer '(char *)s'. The function stops when n bytes are filled.
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
