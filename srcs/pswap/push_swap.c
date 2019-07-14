#include "push_swap.h"

void		check_dups(char **av)
{
	int i;
	int j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strequ(av[i], av[j]))
				ERROR;
			j++;
		}
		i++;
	}
}

int			check_largest(t_stackdata *stack)
{
	t_stack *head;
	t_stack *head2;

	head = stack->lst;
	head2 = stack->lst->next;
	while (head2)
	{
		if (head->value < head2->value)
			return (0);
		else
			head2 = head2->next;
	}
	return (1);
}

int			check_inverted(t_stackdata *a)
{
	t_stack *head;

	head = a->lst;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			head = head->next;
		else
			return (0);
	}
	return (1);
}

int			check_sorted(t_stackdata *a)
{
	t_stack *head;

	head = a->lst;
	while (head && head->next)
	{
		if ((head->value < head->next->value)
		&& (head->next->value - head->value == 1))
			head = head->next;
		else
		{
			if (check_inverted(a))
				return (2);
			else
				return (0);
		}
	}
	return (1);
}