#include <push_swap.h>
#include <libft.h>

int		do_op(char *line, t_stack **a, t_stack **b)
{
	if (ft_strequ(line, "sa"))
		sa(a);
	else if (ft_strequ(line, "sb"))
		sb(b);
	else if (ft_strequ(line, "ss"))
		ss(a, b);
	else if (ft_strequ(line, "pa"))
		pa(a, b);
	else if (ft_strequ(line, "pb"))
		pb(a, b);
	else if (ft_strequ(line, "ra"))
		ra(a);
	else if (ft_strequ(line, "rb"))
		rb(b);
	else if (ft_strequ(line, "rr"))
		rr(a, b);
	else if (ft_strequ(line, "rra"))
		rotate(a, -1);
	else if (ft_strequ(line, "rrb"))
		rotate(b, -1);
	else if (ft_strequ(line, "rrr"))
		rrr(a, b);
	else if (ft_strequ(line, "pl"))
		print_stack(*a);
	else if (ft_strequ(line, "prl"))
		print_reverse_stack(*a);
	else
		return (0);
	ft_putendl_col_fd(GREEN, line, 1);
	CLEAR;
	visualize(*a, *b);
return (1);
}

int     check_op(char *line)
{
	if (ft_strequ(line, "sa") || ft_strequ(line, "sb"))
		return (1);
	else if (ft_strequ(line, "pa") || ft_strequ(line, "pb"))
		return (1);
	else if (ft_strequ(line, "ss"))
		return (1);
	else if (ft_strequ(line, "ra") || ft_strequ(line, "rb"))
		return (1);
	else if (ft_strequ(line, "rr") || ft_strequ(line, "rrr"))
		return (1);
	else if (ft_strequ(line, "rra") || ft_strequ(line, "rrb"))
		return (1);
	// Remove
	else if (ft_strequ(line, "pl") || ft_strequ(line, "prl"))
		return (1);
	return (0);
}

int    checkline(char *line, t_stack **a, t_stack **b)
{
    if (line)
		{
			if (check_op(line))
				do_op(line, a, b);
			else
				return (0);
			return (1);
		}
		else
			return (0);
}