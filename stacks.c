#include <stdlib.h>
#include "./includes/push_swap.h"
#include "libft/libft.h"

t_stack	*init_stack(int ac, char **av)
{
	int i;
	t_stack *head;
	t_stack *tmp;

	head = (t_stack *)malloc(sizeof(t_stack));
	tmp = head;
	i = 0;
	while (++i < ac)
	{
		tmp->number = ft_atoi(av[i]);
		tmp->next = (t_stack *)malloc(sizeof(t_stack));
		tmp = tmp->next;
	}
	tmp->next = NULL;
	return (head);
}

void	stack_add(t_stack **head, t_stack *node)
{
	t_stack *tmp;

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	(*(head))->next = node;
}

void	stack_remove(t_stack **head, int index)
{
	int i;
	t_stack *tmp;
	t_stack *prv;

	tmp = *head;
	i = 0;
	while (i < index)
	{
		prv = tmp;
		tmp = tmp->next;
		i++;
	}
	if (tmp)
	{
		prv->next = NULL;
		free(tmp);
	}
}