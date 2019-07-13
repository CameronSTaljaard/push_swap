#include "push_swap.h"
#include "../checker/checker.h"

int	main(int ac, char **av)
{
	t_push_swap	*ps;
	char		args;
	char		**s_argv;

	handle_arguments(&ac, &av, &args);
	if(!(input_valid(ac, av)))
		KO;
	s_argv = atoi_split(av);
	ps->b = NULL;
	if (!string_input(av[0]))
		ps->a = init_stack(ac, av);
	else
		ps->a = initstack(length_of(s_argv), s_argv);
	if (sorted(ps->a))
		ft_putendl("GREEN");
		//OK_FREE
	return (0);
}