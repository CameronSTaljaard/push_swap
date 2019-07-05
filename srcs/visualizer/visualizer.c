/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:38:59 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/05 19:39:00 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft.h>

static void		print_top(void)
{
	int		i;

	ft_putchar_col_fd(GREEN, 0x250F, 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x2533, 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x2513, 1);
	ft_putchar('\n');
}

static void		print_content(t_stack *a, t_stack *b)
{
	int		i;

	while (a || b)
	{
		DIVIDER;
		if (a)
			i = 13 - ft_intlen(a->number);
		else
			i = 13;
		(a) ? (ft_putnbr(a->number)) : NULL;
		while (--i)
			ft_putchar(' ');
		DIVIDER;
		if (b)
			i = 13 - ft_intlen(b->number);
		else
			i = 13;
		(b) ? (ft_putnbr(b->number)) : NULL;
		while (--i)
			ft_putchar(' ');
		DIVIDER;
		(a) ? (a = a->next) : NULL;
		(b) ? (b = b->next) : NULL;
		ft_putendl("");
	}
}

static void		print_bottom(void)
{
	int		i;

	ft_putchar_col_fd(GREEN, 0x2517, 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x253B, 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x251B, 1);
	ft_putchar('\n');
}

void			visualize(t_stack *a, t_stack *b, int c, char *command)
{
	CLEAR;
	print_top();
	print_content(a, b);
	print_bottom();
	if (c)
		ft_putendl(command);
}
