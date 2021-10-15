/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:26:23 by khammers          #+#    #+#             */
/*   Updated: 2021/08/03 14:40:43 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prototype: void	ft_putendl_fd(char *s, int fd);
**
** The function ft_putendl_fd() outputs a string (s) to the given file
** descriptor, followed by a new line.
** The funktion ft_putstr_fd() is called to write the string and ft_putchar_fd()
** called to add a newline character ('\n').
*/
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
