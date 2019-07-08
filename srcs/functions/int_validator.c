#include <libft.h>
#include <push_swap.h>

int			int_input_check(int ac, char **av)
{
	int i;

	i = 0;
	while (++i < ac)
	{
		if (!only_digits(av[i]))
			return (FALSE);
		if (!int_check(av[i]))
			return (FALSE);
		if (has_doubles(ac, av))
			return (FALSE);
	}
	return (TRUE);
}