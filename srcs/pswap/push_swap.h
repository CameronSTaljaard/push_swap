#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <libft.h>
# define SHIFT_ARGV {av++; ac--;}
# define CHECK_ARGS {if (!ac) ft_putendl_col_fd(RED, "Too few arguments.", 1); exit (0);}
# define ERROR {ft_putendl_col_fd(RED, "ERROR\n", 1); exit(0);}
# define VAR(NAME) #NAME
# define FS() (freestack(a),freestack(b))
# define MESSAGE(string, colour) (col_endl_fd(colour, string, 1),FS(),exit(1))
# define ERR() (col_endl_fd(FRED, "Error", 1), exit(1))
# define CAT(A, B) A B
# define ARRLEN(args, ac) ac = 0;while(args[ac])ac++;ac++;

typedef struct	s_stack
{
	int				value;
	int				size;
	struct s_stack	*next;
}				t_stack;

typedef struct	s_stackdata
{
	t_stack		*lst;
	int			size;
}				t_stackdata;

typedef struct	s_ps
{
	t_stackdata	a;
	t_stackdata	b;
}				t_ps;

void			handle_arguments(int *ac, char ***av);
t_stack			*new_node(int value);
int				pop(t_stackdata *list);
void			push(t_stackdata *list, int val);
int				peek(t_stack *top);
void			rule(t_stackdata *a, t_stackdata *b, char *line);
int				check_sorted(t_stackdata *a);
int				check_largest(t_stackdata *stack);
int				check_inverted(t_stackdata *a);
void			swap(t_stackdata *a);
void			push_to(t_stackdata *a, t_stackdata *b);
void			rotate(t_stackdata *a);
void			rrx(t_stackdata *a);
void			ss(t_stackdata *a, t_stackdata *b);
void			rr(t_stackdata *a, t_stackdata *b);
void			rrr(t_stackdata *a, t_stackdata *b);
void			check_dups(char **av);
void			temp_stack(t_stackdata *temp, int size);
t_stackdata		normalise(t_stackdata *temp, int size, t_stackdata *a);
void			freestack(t_stackdata *stack);
void			init(t_ps *ps, char **av, int ac);
//
void			init_ps(t_ps *ps, char **av, int ac);
int				bottom_val(t_stackdata *stack);
int				lst_size(t_stackdata *stack);
int				lowest_val(t_stackdata *stack);
int				highest_val(t_stackdata *stack);
int				highest_under(t_stackdata *stack, int val);
int				find_pos(t_stackdata *stack, int value);
void			freestack(t_stackdata *stack);
t_stackdata		normalise(t_stackdata *temp, int size, t_stackdata *a);
int				moves(t_stackdata *stack, int value);
void			temp_stack(t_stackdata *temp, int size);
void			dtt(t_ps *ps);
void			rotateb(t_ps *ps, int pos, int halfstack);
void			secondhighest(t_ps *ps);
void			partition(t_ps *ps);
int				checkdoublerule(t_ps *ps);
void			rotate_a_end(t_ps *ps);
void			pushbacktoa(t_ps *ps);
void			backtoa(t_ps *ps);
void			rotate_b(t_ps *ps, int i);
int				input_valid(int ac, char **av);
int				string_input(char *str);
int				int_input_check(int ac, char **av);
int				only_digits(char *str);
int				int_check(char *str);
int				has_doubles(int ac, char **av);

#endif
