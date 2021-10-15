/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:37:08 by khammers          #+#    #+#             */
/*   Updated: 2021/08/03 14:40:35 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prototype: void	ft_putchar_fd(char c, int fd);
**
** The function ft_putchar_fd() outputs character (c) to the given file
** desriptor using the functtion write() function.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
