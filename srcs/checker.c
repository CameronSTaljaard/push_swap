#include <libft.h>
#include <push_swap.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;

	if (ac < 3)
		ft_putendl_col_fd(RED, "Too few arguments.", 1);
	if (ac < 3)
		return (0);

	a = init_stack(ac, av);
	b = stack_new(69);

	if (b == NULL)
		ft_putendl_col_fd(GREEN, "b is empty", 1);
	ft_putendl_col_fd(RED, "Stack 1:", 1);
	ft_putendl_col_fd(RED, "-----------", 1);
	print_stack(a);
	ft_putendl_col_fd(RED, "-----------", 1);
	
	reverse_rotate(&a);
	ft_putendl_col_fd(RED, "Stack 1:", 1);
	ft_putendl_col_fd(RED, "-----------", 1);
	print_stack(a);
	ft_putendl_col_fd(RED, "-----------", 1);

	ft_putstr_col_fd(GREEN, "Stack a size is: ", 1);
	ft_putnbr_col_fd(GREEN, stack_size(a), 1);
	ft_putendl("");
	ft_putstr_col_fd(GREEN, "Stack b size is: ", 1);
	ft_putnbr_col_fd(GREEN, stack_size(b), 1);
	ft_putendl("");
	return (0);
}