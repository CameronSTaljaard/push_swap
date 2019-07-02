#include <libft.h>
#include <push_swap.h>

void	ft_print_stack(t_stack *a)
{
	t_stack *tmp;

	tmp = a;
	while(tmp)
	{
		ft_putnbr(tmp->number);
		ft_putendl("");
		tmp = tmp->next;
	}
}