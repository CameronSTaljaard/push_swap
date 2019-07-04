#include <push_swap.h>
#include <libft.h>

int     checkwhichop(char **line, t_stack **a, t_stack **b)
{
    if (ft_strcmp(*line, "sa") == 0)
        sa(a);
    else if (ft_strcmp(*line, "sb") == 0)
        sb(b);
    else if (ft_strcmp(*line, "ss") == 0)
        ss(a, b);
    else if (ft_strcmp(*line, "pa") == 0)
        pa(a, b);
    else if (ft_strcmp(*line, "pb") == 0)
        pb(a, b);
    else if (ft_strcmp(*line, "ra") == 0)
        ra(a);
    else if (ft_strcmp(*line, "rb") == 0)
        rb(b);
    else if (ft_strcmp(*line, "rr") == 0)
        rr(a, b);
    else if (ft_strcmp(*line, "rra") == 0)
        rra(a);
    else if (ft_strcmp(*line, "rrb") == 0)
        rrb(b);
    else if (ft_strcmp(*line, "rrr") == 0)
        rrr(a, b);
    else
        return (0);
	ft_putendl_col_fd(RED, "-------------", 1);
	print_stack(*a);
	ft_putendl_col_fd(RED, "-------------", 1);
    return (1);
}

void    checkline(char **line, t_stack **a, t_stack **b)
{
    if (line != NULL)
        checkwhichop(line, a, b);
}