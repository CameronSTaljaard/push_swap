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
	*a = push_in_list(*a, num);
	*b = (*b)->next;
	free(tmp);
	ft_putendl_col_fd(GREEN, "pa", 1);
}

void	sa(t_stack **a)
{
	t_stack *temp;

	if(stack_size(*a) > 2)
	{
		temp = *a;
		temp = temp->next;
		(*a)->next = temp->next;
		temp->next = *a;
		*a = temp;
	}
	ft_putendl_col_fd(GREEN, "sa", 1);
}

void	sb(t_stack **b)
{
	t_stack *temp;

	if(stack_size(*b) > 2)
	{
		temp = *b;
		temp = temp->next;
		(*b)->next = temp->next;
		temp->next = *b;
		*b = temp;
	}
	ft_putendl_col_fd(GREEN, "sb", 1);
}