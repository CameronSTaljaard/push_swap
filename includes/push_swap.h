#ifndef PUSH_SWAP_H
 #define PUSH_SWAP_H
 #include <stdlib.h>

 typedef struct s_stack
 {
				int number;
				struct s_stack *next;
				struct s_stack *previous;
 }							t_stack;

 t_stack 				*init_stack();
 t_stack				*stack_new(int n);
 void						stack_add(t_stack **head, t_stack *node);
 void						print_stack(t_stack *a);
 int						stack_size(t_stack *a);
 t_stack	*push_in_list(t_stack *list, int num);

 /*
 ** Operations.
 */
 void						sa(t_stack **a);
 void						sa(t_stack **b);
 void		pa(t_stack **a, t_stack **b);

#endif