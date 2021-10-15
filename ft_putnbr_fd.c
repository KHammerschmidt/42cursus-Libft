/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:31:43 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:31:23 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_putnbr_fd() outputs an integer (n) to the given file
** descriptor.
**
** (1) corner case of int_min: (-2147483648) the write function writes the 11
** characters;
** (2) check if n < 0, one digit long or multiple digits long;
** (2) if (n < 0), (-) is printed and the function called again (recursion);
** (3) if n is one digit: (n >= 0 && n <= 9) the digit is written by calling
** ft_putchar_fd();
** (4) if n is multiple digits long, the function is called in a recursive
** manner with (n/10) to decrease it's length, last digit is printed using
** modulo, indicating the rest of the division (e.g. last digit);
*/
void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	nbr;

	nbr = (long int)n;
	c = 0;
	if (nbr == -2147483648)
		write(fd, "-2147483648", 11);
	else if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nbr, fd);
	}
	else if (nbr >= 0 && nbr <= 9)
	{
		c = '0' + nbr;
		ft_putchar_fd(c, fd);
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		c = '0' + (nbr % 10);
		ft_putchar_fd(c, fd);
	}
}
