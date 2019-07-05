#include <push_swap.h>
#include <libft.h>

void	ra(t_stack **stack)
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
	ft_putendl_col_fd(GREEN, "ra", 1);
}

void	rb(t_stack **stack)
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
	ft_putendl_col_fd(GREEN, "rb", 1);
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
}

void rotate(t_stack **stack, int N) 
{ 
    if (N == 0) 
        return; 
  
    t_stack *current = *stack; 
    int count = 1; 
    while (count < N && current != NULL) { 
        current = current->next; 
        count++; 
    } 
    if (current == NULL) 
        return; 
    t_stack *NthNode = current; 
    while (current->next != NULL) 
        current = current->next; 
    current->next = *stack; 
    (*stack)->previous = current; 
    *stack = NthNode->next; 
    (*stack)->previous = NULL; 

    NthNode->next = NULL; 
}

void	rra(t_stack **stack)
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
	ft_putendl_col_fd(GREEN, "ra", 1);
}

/*
void	rra(t_stack **stack)
{
	if (stack_size(*stack) == 2)
		sb(stack);
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
	ft_putendl_col_fd(GREEN, "rra", 1);
}
*/

void	rrb(t_stack **stack)
{
	if (stack_size(*stack) < 2)
		sb(stack);
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
	ft_putendl_col_fd(GREEN, "rrb", 1);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
	ft_putendl_col_fd(GREEN, "rra", 1);
}