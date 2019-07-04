#include <push_swap.h>
#include <libft.h>
#define DIVIDER ft_putchar(0x2503); ft_putchar(' ');

static void	print_top()
{
	int i;
	// Corner.
	ft_putchar(0x250F);

	i = -1;
	while(++i < 13)
		ft_putchar(0x2501);

	// Divider
	ft_putchar(0x2533);

	i = -1;
	while(++i < 13)
		ft_putchar(0x2501);

	// Corner
	ft_putchar(0x2513);
	ft_putchar('\n');
}

static void	print_content(t_stack *a, t_stack *b)
{
	int	i;

	while (a || b)
	{
		DIVIDER;
		(a) ? (i = 13 - ft_intlen(a->number)) : (i = 13);
		(a) ? (ft_putnbr(a->number)) : NULL;
		while (--i)
			ft_putchar(' ');
		DIVIDER;
		(b) ? (i = 13 - ft_intlen(b->number)) : (i = 13);
		(b) ? (ft_putnbr(b->number)) : NULL;
		while (--i)
			ft_putchar(' ');
		DIVIDER;
		(a) ? (a = a->next) : NULL;
		(b) ? (b = b->next) : NULL;
		ft_putendl("");
	}
}

static void	print_bottom()
{
	int i;
	// Corner.
	ft_putchar(0x2517);

	i = -1;
	while(++i < 13)
		ft_putchar(0x2501);

	// Divider
	ft_putchar(0x253B);

	i = -1;
	while(++i < 13)
		ft_putchar(0x2501);

	// Corner
	ft_putchar(0x251B);
	ft_putchar('\n');
}

void	visualize(t_stack *a, t_stack *b)
{
	print_top();
	print_content(a, b);
	print_bottom();
}

void	print_stack(t_stack *a)
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