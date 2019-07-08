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

	args = 0;
	if (ac < 3)
		BAD_USE;
	while(is_arg(av + 1, &args))
		SHIFT_ARGV;
	if (ac < 3)
		BAD_USE;
	if (!(input_valid(ac, av)))
		ERROR;
	INIT_STACKS;
	if (V_ENABLED)
		VISUALIZE;
	if (sorted(a))
		OK;
	read_input(a, b, &line, args);
	if (!sorted(a) || b)
		KO;
	return (0);
}
