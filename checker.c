#include <unistd.h>
#include "./libft/libft.h"
#include "./includes/push_swap.h"
#include <stdlib.h>

int		main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;

	if (ac == 1)
		write(1, "No arguments.\n", sizeof("No arguments.\n"));
	if (ac == 1)
		return (0);
	a = init_stack(ac, av);
	b = NULL;

	ft_print_list(a);
	stack_remove(&a, 4);
	ft_print_list(a);
	return (0);
}