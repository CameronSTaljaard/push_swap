#include "./libft/libft.h"
#include "./includes/push_swap.h"

void	ft_print_list(t_stack *a)
{
	t_stack *tmp;

	tmp = a;
	while(tmp->next)
	{
		ft_putnbr(tmp->number);
		ft_putendl("");
		tmp = tmp->next;
	}
}