/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:58:12 by katharinaha       #+#    #+#             */
/*   Updated: 2022/03/07 17:39:27 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Counts the number of digits of the integer. */
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

/* Copies the digits of the integer into a string. */
static char	*copy_digits(long b, int sign, int size)
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

/* The ft_itoa() function allocates (with malloc(3)) and returns a string
as the converted integer received as paramter. Returns the integer or NULL
if the allocation fails. */
char	*ft_itoa(int n)
{
	int		sign;
	int		size;
	char	*str;
	long	b;

	sign = 1;
	b = (long)n;
	if (n < 0)
	{
		b = -b;
		sign = -sign;
	}
	size = get_size((long)n, sign);
	str = copy_digits(b, sign, size);
	return (str);
}
