#include "stacks.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			neg;
	long long	res;

	i = 0;
	neg = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	res = number(str + i, neg);
	return (res);
}

int	number(const char *str, int neg)
{
	int			i;
	long long	res;

	i = 0;
	res = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		if (res > 4294967295)
		{
			if (neg < 0)
				return (0);
			else
				return (-1);
		}
		i++;
	}
	return (res * neg);
}
