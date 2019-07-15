/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <agabrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 15:45:27 by agabrie           #+#    #+#             */
/*   Updated: 2018/09/03 10:10:50 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rule(t_stackdata *a, t_stackdata *b, char *line)
{
	if (ft_strequ(line, "sa"))
		swap(a);
	else if (ft_strequ(line, "sb"))
		swap(b);
	else if (ft_strequ(line, "ss"))
		ss(a, b);
	else if (ft_strequ(line, "pa"))
		push_to(a, b);
	else if (ft_strequ(line, "pb"))
		push_to(b, a);
	else if (ft_strequ(line, "ra"))
		rotate(a);
	else if (ft_strequ(line, "rb"))
		rotate(b);
	else if (ft_strequ(line, "rr"))
		rr(a, b);
	else if (ft_strequ(line, "rra"))
		rrx(a);
	else if (ft_strequ(line, "rrb"))
		rrx(b);
	else if (ft_strequ(line, "rrr"))
		rrr(a, b);
	else
	{
		(a) ? (freestack(a)) : NULL;
		(b) ? (freestack(b)) : NULL;
		ERROR;
	}
}

void		initialise(t_ps *ps)
{
	ps->a.size = 0;
	ps->b.size = 0;
	ps->a.lst = NULL;
	ps->b.lst = NULL;
}

void		init(t_ps *ps, char **av, int ac)
{
	int				i;
	char			**args;
	t_stackdata		temp;

	args = (char**)malloc(sizeof(char *) * ac);
	ft_copy_array(av, args);
	i = 1;
	initialise(ps);
	if (ac == 2)
	{
		ft_freearray(args);
		args = ft_strsplit(av[1], ' ');
		ARRLEN(args, ac);
	}
	check_dups(args);
	while (ac - (i + 1) >= (0) && ac - (i + 1) < ac)
	{
		if (!ft_isnum(args[ac - (i + 1)]))
			ERROR;
		push(&ps->a, ft_atoi(args[ac - (i + 1)]));
		i++;
	}
	temp_stack(&temp, lst_size(&ps->a));
	ft_freearray(args);
	ps->a = normalise(&temp, lst_size(&ps->a), &ps->a);
}
