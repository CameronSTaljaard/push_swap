/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bopopovi <bopopovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:25:30 by bopopovi          #+#    #+#             */
/*   Updated: 2018/10/19 19:36:19 by bopopovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

# include "libft.h"
# include "push_swap.h"
# include "get_next_line.h"

# define PRINT_ERROR_MSG 0

typedef struct		s_stack
{
	int				number;
	struct s_stack	*next;
	struct s_stack	*previous;
}					t_stack;

typedef struct		s_stacks
{
	t_stack			*a;
	t_stack			*b;
	size_t			a_size;
	size_t			b_size;
}					t_stacks;

typedef struct		s_inst
{
	void			(*function)(t_stacks*);
	char			*name;
}					t_inst;

/*
** INPUT PARSING
*/

int					params_to_stack(char **params, t_stack **head);
int					get_input(int ac, char **av, t_stack **head_a);

/*
** MEM TOOLS
*/

void				del_stacks(t_stacks *stks);
void				init_stacks_container(t_stacks *container);
void				free_structures(t_stacks *stks, t_list **inst);

/*
** STACKS FUNCTIONS
*/

void				swap_a(t_stacks *stks);
void				swap_b(t_stacks *stks);
void				swap_ab(t_stacks *stks);
void				push_a(t_stacks *stks);
void				push_b(t_stacks *stks);
void				rotate_a(t_stacks *stks);
void				rotate_b(t_stacks *stks);
void				rotate_ab(t_stacks *stks);
void				reverse_rotate_a(t_stacks *stks);
void				reverse_rotate_b(t_stacks *stks);
void				reverse_rotate_ab(t_stacks *stks);

/*
** INSTRUCTION TOOLS
*/

void				rec_inst(char *name, t_list **inst, void (*val)(t_stacks*));
void				*is_instruction(char *instruction);

/*
** COMPARISON TOOLS
*/

int					get_val(t_stack *head);
int					is_greater(t_stack *a, t_stack *b);
int					is_smaller(t_stack *a, t_stack *b);
int					is_equal(t_stack *a, t_stack *b);
int					is_sorted(t_stack *head, int ascending);

/*
** DEBUG
*/

int					put_error(char *msg, int return_value);
void				print_stack(t_stack *head);
void				print_link_state(t_stack *link);

#endif
