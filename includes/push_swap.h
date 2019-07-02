#ifndef PUSH_SWAP_H
 #define PUSH_SWAP_H

 typedef struct s_stack
 {
				int number;
				struct s_stack *next;
				struct s_stack *previous;
 }							t_stack;
 
 void						ft_print_stack(t_stack *a);
 t_stack				*stack_new(int n);
 void						stack_add(t_stack **head, t_stack *node);
 t_stack 				*init_stack();

#endif