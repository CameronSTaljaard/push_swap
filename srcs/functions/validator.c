#include <libft.h>

// Make this actually work later
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
	}
	return (TRUE);
}