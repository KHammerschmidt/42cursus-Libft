/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:36:46 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:30:16 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_isalnum() checks if the int parameter is either a digit or a
** letter (upper- & lowercase).
** If 'int' is a number (0-9) return 1, if it is a letter (upper- and
** lowercase) return 1, otherwise return 0.
*/
int	ft_isalnum(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}
