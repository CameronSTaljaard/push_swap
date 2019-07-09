#include <libft.h>
#include <push_swap.h>

/*
int			string_input_valid(char **str)
{
	while (*str)
	{
		ft_putendl_col_fd(RED, *str, 1);
		if (!only_digits(*str))
			ERROR;
		if (!int_check(*str))
			ERROR;
		str++;
		//if (has_doubles(ac, av))
		//	return (FALSE);
	}
	return (TRUE);
}
*/
int			string_input(char *str)
{
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
			return (TRUE);
		str++;
	}
	return (FALSE);
}