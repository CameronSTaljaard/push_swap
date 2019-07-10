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
	char	*line;
	char	args;
	char	**string_argv;

	SHIFT_ARGV;
	args = 0;
	if (ac == 0)
		BAD_USE;
	while(is_arg(av, &args))
		SHIFT_ARGV;
	if (ac == 0)
		BAD_USE;
	if (!(input_valid(ac, av)))
		ERROR;
	if (!string_input(av[0]))
		(INIT_STACKS);
	if (string_input(av[0]))
	{
		string_argv = atoi_split(av);
		a = init_stack(length_of(string_argv), string_argv);
		b = NULL;
	}
	if (V_ENABLED)
		VISUALIZE;
	if (sorted(a))
		OK;
	read_input(&a, &b, &line, args);
	if (!sorted(a) || b)
		KO;
	return (0);
}
