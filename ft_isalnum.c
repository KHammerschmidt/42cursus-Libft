/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:36:46 by khammers          #+#    #+#             */
/*   Updated: 2021/08/03 15:11:34 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prototype: int	ft_isalnum(int c);
**
** The function ft_isalnum() checks if the int parameter is either a digit or a
** letter (upper- & lowercase).
** (1) if 'int' is a number (0-9) return 1, if it is a letter (upper- and
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
