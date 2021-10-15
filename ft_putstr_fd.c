/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:01:54 by khammers          #+#    #+#             */
/*   Updated: 2021/08/03 14:40:55 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prototype: void	ft_putstr_fd(char const *s, int fd);
**
** The function ft_putstr_fd() outputs the string (s) to the given file
** descriptor by callig the function ft_putchar_fd().
**
** (1) while s not at the end, every character is written by calling
** ft_putchar_fd() and i incremented to loop through the string;
**
*/
void	ft_putstr_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
