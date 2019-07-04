#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdlib.h>

typedef struct		s_stack
{
	int number;
	struct s_stack	*next;
	struct s_stack	*previous;
}					t_stack;

t_stack 			*init_stack();
t_stack 			*stack_new(int n);
void 				stack_add(t_stack **head, t_stack *node);
void 				print_stack(t_stack *a);
int 				stack_size(t_stack *a);
t_stack 			*push_in_list(t_stack *list, int num);

/*
** Operations.
*/
void 				sa(t_stack **a);
void 				sb(t_stack **b);
void 				pa(t_stack **a, t_stack **b);
void 				pb(t_stack **a, t_stack **b);
void 				ss(t_stack **a, t_stack **b);
void 				ra(t_stack **stack);
void 				rb(t_stack **stack);
void 				rra(t_stack **stack);
void 				rrb(t_stack **stack);
void				rrr(t_stack **a, t_stack **b);
void				rr(t_stack **a, t_stack **b);

/*
** Line reading
*/
int 				check_op(char **line, t_stack **a, t_stack **b);
void 				checkline(char **line, t_stack **a, t_stack **b);

/*
** Input checking
*/
int					input_valid(int ac, char **av);

#endif