#include <libft.h>
#include <push_swap.h>

int		stack_size(t_stack *a)
{
	t_stack *tmp;
	size_t	i;

	tmp = a;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

t_stack	*push_in_list(t_stack *list, int num)
{
	t_stack	*tmp;

	if ((tmp = malloc(sizeof(t_stack))) == NULL)
		return (NULL);
	tmp->number = num;
	tmp->previous = NULL;
	tmp->next = list;
	return (tmp);
}