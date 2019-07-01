#include <libft.h>
#include "push_swap.h"
#include "stdlib.h"

int		main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;

	if (ac == 1)
		ft_putendl_col_fd(RED, "Too few arguments.", 1);
	if (ac == 1)
		return (0);
	a = init_stack(ac, av);
	b = NULL;

	if (b == NULL)
		ft_putendl_col_fd(GREEN, "It's NULL fam", 1);
	ft_print_list(a);
	stack_remove(&a, 4);
	ft_print_list(a);
	return (0);
}