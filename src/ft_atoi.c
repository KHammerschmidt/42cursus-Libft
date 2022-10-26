#include "libft.h"

/* Converts the initial portion of the string pointed to by 'str' to int representation. 
Addes tests for int_min and int_max. */
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if ((str[i + 1] == '-') || (str[i + 1] == '+'))
			return (0);
		else if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
		result = result * 10 + str[i++] - '0';

	if (result * sign < -2147483648 || result * sign > 2147483647)
		return (0);

	return (result * sign);
}
