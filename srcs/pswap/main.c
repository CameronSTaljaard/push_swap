/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <agabrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 08:14:12 by agabrie           #+#    #+#             */
/*   Updated: 2018/09/03 10:18:44 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		handle_arguments(int *ac, char ***av)
{
	if (!*ac)
		ERROR;
	SHIFT_ARGV;
	//while (is_arg(*av, args))
	//{
	//	*av += 1;
	//	*ac -= 1;
	//}
	if(!*ac)
	{
		ft_putendl_col_fd(RED, "Too few arguments", 1);
		exit(0);
	}
}

int			main(int ac, char **av)
{
	t_ps		ps;
	SHIFT_ARGV;
	handle_arguments(&ac, &av);
	if(!input_valid(ac, av))
		ERROR
	if (string_input(*av))
		init_ps(&ps, av ,ac);
	partition(&ps);
	backtoa(&ps);
	//else
	//	ft_putendl_col_fd(RED, "Numbers input", 1);
	//	return (0);
}
/*
int			main(int ac, char **av)
{
	t_ps		ps;

	if (ac > 1)
	{
		init(&ps, av, ac);
		if (lst_size(&ps.a) < 50)
		{
			dtt(&ps);
			backtoa(&ps);
		}
		else
		{
			partition(&ps);
			backtoa(&ps);
		}
		freestack(&ps.a);
	}
	exit(0);
}
*/