#include <push_swap.h>

int	sorted(t_stack *a)
{
	int temp;

	if (!a)
		return (0);
	while (a->next)
	{
		temp = a->number;
		a = a->next;
		if (temp > a->number && a)
			return (0);
	}
	return (1);
}