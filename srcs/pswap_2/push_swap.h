#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <libft.h>

typedef	struct	s_push_swap
{
	t_stack	*a;
	t_stack	*b;
	int 	cmd_cnt;
}				t_push_swap;

t_stack				*init_stack();
t_stack				*stack_new(int n);

#endif
