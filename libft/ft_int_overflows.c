#include <libft.h>

int	ft_int_overflows(const char *str)
{
	int		i;
	long	res;
	int 	neg;

	i = 0;
	res = 0;
	neg = 1;
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		if (neg == 1)
			if (res > MAX_INT)
				return (1);
		i++;
	}
	res *= neg;
	if (neg == -1)
		if (res < MIN_INT)
			return (1);
	return (0);
}