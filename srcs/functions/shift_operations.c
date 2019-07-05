#include <push_swap.h>
#include <libft.h>

void	pa(t_stack **a, t_stack **b)
{
	int num;
	t_stack *tmp;
	
	if (*b == NULL)
		return ;
	tmp = *b;
	num = (*b)->number;
	//*a = push_in_list(a, num);
	push(a, num);
	*b = (*b)->next;
	if (*b)
		(*b)->previous = NULL;
	free(tmp);
	ft_putendl_col_fd(GREEN, "pa", 1);
}

void	pb(t_stack **a, t_stack **b)
{
	int num;
	t_stack *tmp;
	
	if (*a == NULL)
		return ;
	tmp = *a;
	num = (*a)->number;
	//*b = push_in_list(a, num);
	push(b, num);
	*a = (*a)->next;
	free(tmp);
	ft_putendl_col_fd(GREEN, "pb", 1);
}

void 	sa(t_stack **a)
{
	t_stack *first 	= *a;
	t_stack *second = (*a)->next;

	first->next		= second->next;
	first->previous = second; 
	second->previous = NULL;
	second->next = first;
	*a = second;
}

void 	sb(t_stack **b)
{
	t_stack *first 	= *b;
	t_stack *second = (*b)->next;

	first->next		= second->next;
	first->previous = second; 
	second->previous = NULL;
	second->next = first;
	*b = second;
}

void	ss(t_stack **a, t_stack **b)
{
	sb(b);
	sa(a);
	ft_putendl_col_fd(GREEN, "ss", 1);
}