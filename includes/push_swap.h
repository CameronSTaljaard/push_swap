#ifndef PUSH_SWAP_H
 #define PUSH_SWAP_H

 typedef struct s_stack
 {
				int number;
				struct s_stack *next;
				struct s_stack *previous;
 }				t_stack;
 
 void			ft_print_list(t_stack *a);
 t_stack 		*init_stack();

#endif