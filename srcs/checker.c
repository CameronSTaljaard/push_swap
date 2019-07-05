#include <libft.h>
#include <push_swap.h>
#include <stdlib.h>
#include <get_next_line.h>

int main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	char *line = NULL;

	if (ac < 3)
		ft_putendl_col_fd(RED, "Too few arguments.", 1);
	if (ac < 3)
		return (0);
	if (!(input_valid(ac, av)))
	{
		ft_putendl_col_fd(RED, "ERROR", 1);
		return (0);
	}
	a = init_stack(ac, av);
	b = NULL;
	while (get_next_line(0, &line))
	{
		if (checkline(line))
			do_op(line, &a, &b, 1);
		else
			ERROR;
	}
	return (0);
}