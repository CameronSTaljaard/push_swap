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

void	pb(t_stack **a, t_stack **b)
{
	int num;
	t_stack *tmp;
	
	if (*a == NULL)
		return ;
	tmp = *a;
	num = (*a)->number;
	*b = push_in_list(*b, num);
	*a = (*a)->next;
	free(tmp);
	ft_putendl_col_fd(GREEN, "pb", 1);
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

void	ss(t_stack **a, t_stack **b)
{
	sb(b);
	sa(a);
}

void	rotate(t_stack **stack)
{
	if (stack_size(*stack) < 3)
		return ;
	t_stack *head;
	t_stack *tmp;

	head = *stack;
	*stack = (*stack)->next;
	(*stack)->previous = NULL;
	head->next = NULL;
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = head;
	head->previous = tmp;
}

void	reverse_rotate(t_stack **stack)
{
	if (stack_size(*stack) < 3)
		return ;
	t_stack *head;
	t_stack *end;

	head = *stack;
	end = *stack;
	while (end->next)
		end = end->next;
	head->previous = end;
	end->previous->next = NULL;
	end->next = head;
	end->previous = NULL;
	*stack = end;
}