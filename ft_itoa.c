/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:58:12 by katharinaha       #+#    #+#             */
/*   Updated: 2021/10/15 14:30:00 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** (1) two corner cases of int_min and n=-10 are handled and their size
** determined;
** (2) otherwise while (n/10) is larger than 10, int 'size' is incremented.
** (3) Depending on 'sign', either 1 or 2 extra bytes are allocated (for sign
** and/or null-terminator)
** (4) the function returns the size (length) of the integer.
*/
static int	get_size(int long n, int sign)
{
	int	size;

	size = 0;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		size++;
	}
	if (sign == -1)
		size = size + 2;
	else if (sign == 1)
		size = size + 1;
	return (size);
}

/*
** (1) memory space is allocated for the string (as size is known)
** (2) corner case of n=0 is handled,
** (3) if number is negative, the first position of the string is set to '-',
** (4) while loop: the string is filled with the digits (using modulo and
** converted to char value) until b=0;
** (5) last position of the string is filled with null-terminator.
** (6) the string is returned.
*/
static char	*copy_digits(long int b, int sign, int size)
{
	char	c;
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	if (b == 0)
		str[0] = 0 + '0';
	if (sign == -1)
		str[0] = '-';
	i = size - 1;
	while (b > 0 || (b * -1) > 0)
	{
		c = b % 10 + '0';
		str[i] = c;
		i--;
		b = b / 10;
	}
	str[size] = '\0';
	return (str);
}

/*
** The ft_itoa() function allocates (with malloc(3)) and returns a string
** representing the integer received as an argument. The function returns the
** representing integer or NULL if the allocation fails, negative numbers must
** be handled.
**
** (1) to handle int=int_min: long int 'b' is assigned the value of 'n';
** (2) if 'n' is negative, the sign is set to -sign & b changed to a positive
** int;
** (3) to allocate memory space sufficiently, the 'size' (length) of the
** integer is determined with (get_size());
** (4) ft_itoa() returns the string, created via copy_digits().
*/
char	*ft_itoa(int n)
{
	int			sign;
	int			size;
	char		*str;
	int long	b;

	sign = 1;
	b = (int long)n;
	if (n < 0)
	{
		b = -b;
		sign = -sign;
	}
	size = get_size((int long)n, sign);
	return (str = copy_digits(b, sign, size));
}
