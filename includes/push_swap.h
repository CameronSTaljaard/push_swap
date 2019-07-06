/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 20:05:24 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/05 20:05:27 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# define CLEAR ft_putstr("\033[H\033[J");
# define DIVIDER ft_putchar_col_fd(GREEN, 0x2503, 1); ft_putchar(' ');
# define ERROR {ft_putendl_col_fd(RED, "ERROR", 1); exit(0);}
# define BAD_USE {ft_putendl_col_fd(RED, "Too few arguments.", 1); return (0);}
# define SHIFT_ARGV {av++; ac--;}
# define VISUALIZE {ft_putstr("\033[H\033[J"); visualize(a, b);}
# define INIT_STACKS {a = init_stack(ac, av); b = NULL;}
# define V_ENABLED args & 1
# define C_ENABLED (args & (1 << 1)) 

typedef struct		s_stack
{
	int				number;
	struct s_stack	*next;
	struct s_stack	*previous;
}					t_stack;

t_stack				*init_stack();
t_stack				*stack_new(int n);
void				stack_add(t_stack **head, t_stack *node);
int					stack_size(t_stack *a);
void				push(t_stack **head_ref, int new_data);

/*
** Operations.
*/
void				swap(t_stack **stack);
void				push_to(t_stack **to, t_stack **from);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rotate(t_stack **stack, int n);
/*
** Line reading
*/
int					checkline(char *line);
/*
** Input checking
*/
int					is_arg(char **str, int *args);
int					input_valid(int ac, char **av);
int					check_op(char *line);
void				do_op(char *line, t_stack **a, t_stack **b, int c);

/*
** Visualizing
*/
void				visualize(t_stack *a, t_stack *b);
void				print_reverse_stack(t_stack *a);
void				print_stack(t_stack *a);

#endif
