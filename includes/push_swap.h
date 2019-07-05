#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# define CLEAR ft_putstr("\033[H\033[J");
# define ERROR ft_putendl_col_fd(RED, "ERROR", 1);

typedef struct		s_stack
{
	int number;
	struct s_stack	*next;
	struct s_stack	*previous;
}									t_stack;

t_stack 					*init_stack();
t_stack 					*stack_new(int n);
void 						stack_add(t_stack **head, t_stack *node);
int 						stack_size(t_stack *a);
t_stack 					*push_in_list(t_stack *list, int num);
void push(t_stack **head_ref, int new_data);

/*
** Operations.
*/
void 						sa(t_stack **a);
void 						sb(t_stack **b);
void 						pa(t_stack **a, t_stack **b);
void 						pb(t_stack **a, t_stack **b);
void 						ss(t_stack **a, t_stack **b);
void 						ra(t_stack **stack);
void 						rb(t_stack **stack);
void 						rra(t_stack **stack);
void 						rrb(t_stack **stack);
void						rrr(t_stack **a, t_stack **b);
void						rr(t_stack **a, t_stack **b);

/*
** Line reading
*/
int 						check_op(char *line);
int							do_op(char *line, t_stack **a, t_stack **b);
int 						checkline(char *line, t_stack **a, t_stack **b);

/*
** Input checking
*/
int							input_valid(int ac, char **av);

/*
** Visualizing
*/
void						visualize(t_stack *a, t_stack *b);
void						print_reverse_stack(t_stack *a);
void 						print_stack(t_stack *a);

#endif