#include <push_swap.h>
#include <libft.h>
#define DIVIDER ft_putchar_col_fd(GREEN, 0x2503, 1); ft_putchar(' ');

static void	print_top()
{
	int i;

	ft_putchar_col_fd(GREEN, 0x250F, 1);
	i = -1;
	while(++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x2533, 1);
	i = -1;
	while(++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x2513, 1);
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

	ft_putchar_col_fd(GREEN, 0x2517, 1);
	i = -1;
	while(++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x253B, 1);
	i = -1;
	while(++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x251B, 1);
	ft_putchar('\n');
}

void	visualize(t_stack *a, t_stack *b, int c, char *command)
{
	CLEAR
	print_top();
	print_content(a, b);
	print_bottom();
	if (c)
		ft_putendl(command);
}

void	print_reverse_stack(t_stack *a)
{
	t_stack *tmp;

	tmp = a;
	while(tmp->next)
		tmp = tmp->next;
	while(tmp)
	{
		ft_putnbr(tmp->number);
		ft_putendl("");
		tmp = tmp->previous;
	}
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