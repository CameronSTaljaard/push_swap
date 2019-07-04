#include <libft.h>

static int	has_doubles(int ac, char **av)
{
	int	*arr;
	int	i;
	int j;

	i = 1;
	arr = (int *)malloc(sizeof(int) * ac - 1);
	while (++i < ac)
		arr[i] = ft_atoi(av[i]);
	i = 2;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	free(arr);
	return (0);
}

static int	int_check(char *str)
{
	if (*str == '-')
	{
		if(ft_strlen(str) > 11 || ft_int_overflows(str))
			return (FALSE);
	}
	else if (ft_strlen(str) > 10 || ft_int_overflows(str))
		return (FALSE);
	return (TRUE);
}

static int	only_digits(char *str)
{
	if (*str == '-')
		str++;
	while(*str && ft_isdigit(*str))
		str++;
	if (!*str)
		return (TRUE);
	return (FALSE);
}

int		input_valid(int ac, char **av)
{
	int	i;

	i = 1;
	while (++i < ac)
	{
		if(!only_digits(av[i]))
			return (FALSE);
		if(!int_check(av[i]))
			return (FALSE);
		if(has_doubles(ac, av))
			return (FALSE);
	}
	return (TRUE);
}