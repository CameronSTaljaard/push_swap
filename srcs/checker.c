/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:36:56 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/08 10:36:58 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>
#include <stdlib.h>
#include <get_next_line.h>

int	main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	char	args;
	char	**s_argv;

	SHIFT_ARGV;
	(!ac) ? (BAD_USE) : NULL;
	args = 0;
	while (is_arg(av, &args))
		SHIFT_ARGV;
	(!ac) ? (BAD_USE) : NULL;
	(!(input_valid(ac, av))) ? (ERROR) : NULL;
	s_argv = atoi_split(av);
	if (!string_input(av[0]))
		(INIT_STACKS_1);
	else
		INIT_STACKS_2;
	(V_ENABLED) ? (VISUALIZE) : NULL;
	(sorted(a)) ? (OK) : NULL;
	read_input(&a, &b, args);
	(!sorted(a) || b) ? (KO) : NULL;
	return (0);
}
