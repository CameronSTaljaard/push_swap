#include <push_swap.h>
#include <libft.h>

int     check_op(char **line, t_stack **a, t_stack **b)
{
	if (ft_strequ(*line, "sa"))
		sa(a);
	else if (ft_strequ(*line, "sb"))
		sb(b);
	else if (ft_strequ(*line, "ss"))
		ss(a, b);
	else if (ft_strequ(*line, "pa"))
		pa(a, b);
	else if (ft_strequ(*line, "pb"))
		pb(a, b);
	else if (ft_strequ(*line, "ra"))
		ra(a);
	else if (ft_strequ(*line, "rb"))
		rb(b);
	else if (ft_strequ(*line, "rr"))
		rr(a, b);
	else if (ft_strequ(*line, "rra"))
		rra(a);
	else if (ft_strequ(*line, "rrb"))
		rrb(b);
	else if (ft_strequ(*line, "rrr"))
		rrr(a, b);
	else
		return (0);
	ft_putendl_col_fd(GREEN, *line, 1);
	CLEAR;
	visualize(*a, *b);
  return (1);
}

void    checkline(char **line, t_stack **a, t_stack **b)
{
    if (line)
        check_op(line, a, b);
}