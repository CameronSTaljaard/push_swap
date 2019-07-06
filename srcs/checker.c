/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:36:56 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/05 19:36:58 by ctaljaar         ###   ########.fr       */
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
	int		args;

	args = 0;
	if (ac < 3)
		BAD_USE;
	while(is_arg(av + 1, &args))
		SHIFT_ARGV;
	if (!(input_valid(ac, av)))
		ERROR;
	INIT_STACKS;
	if (V_ENABLED)
		VISUALIZE;
	while (get_next_line(0, &line))
	{
		if (checkline(line))
			do_op(line, &a, &b, args);
		else
			ERROR;
	}
	return (0);
}
