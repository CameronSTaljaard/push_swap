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
	char	**s_argv;

	SHIFT_ARGV;
	(!ac) ? (BAD_USE) : NULL;
	/*
	** Error if input is invalid.
	*/
	(!(input_valid(ac, av))) ? (ERROR) : NULL;
	/*
	** Initialize stack a, and stack b depending on if input
	** was a string, or array of numbers.
	*/
	s_argv = atoi_split(av);
	(!string_input(av[0])) ? (INIT_STACKS_1) : (INIT_STACKS_2);
	/*
	** Does nothing if a is already sorted.
	*/
	if (sorted(a))
		return (0);
	else
		sort(a, b);
	return (0);
}
