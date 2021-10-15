/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:37:08 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:31:02 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_putchar_fd() outputs character (c) to the given file
** desriptor using the functtion write() function.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
