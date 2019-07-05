#include <push_swap.h>
#include <libft.h>

void	rr(t_stack **a, t_stack **b)
{
	rotate(a, 1);
	rotate(b, 1);
}

void rotate(t_stack **head, int n) 
{
	t_stack *current;
	t_stack *NthNode;

	if (!n)
		return;

	current = *head;
	int count = 1;
	while (count < n && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return;
	NthNode = current;
	while (current->next != NULL)
		current = current->next;
	current->next = *head;
	(*head)->previous = current;

	*head = NthNode->next;
	(*head)->previous = NULL;
	NthNode->next = NULL;
}

void	reverse_rotate(t_stack *stack)
{
	t_stack *last;
	t_stack *tmp;

	if (!stack)
		return ;
	if (stack_size(stack) < 3)
		return ;
	tmp = stack;
	last = stack;
	while (last->next)
		last = last->next;
	last->next = stack;
	last->previous = NULL;
	stack = last;
	tmp->next = NULL;
}

void	rrr(t_stack **a, t_stack **b)
{
	rotate(a, stack_size(*a) - 1);
	rotate(b, stack_size(*b) - 1);
}