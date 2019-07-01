#include <stdlib.h>
#include "./includes/push_swap.h"
#include "libft/libft.h"

#include <unistd.h>

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