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
#include "checker.h"
#include <stdlib.h>
#include <get_next_line.h>

int	main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	char	args;
	char	**s_argv;

	handle_arguments(&ac, &av, &args);
	if(!(input_valid(ac, av)))
		ERROR
	s_argv = atoi_split(av);
	(!string_input(av[0])) ? (INIT_STACKS_1) : (INIT_STACKS_2);
	(V_ENABLED) ? (VISUALIZE) : NULL;
	if (sorted(a))
		OK_FREE;
	read_input(&a, &b, args);
	if (!sorted(a) || b)
		OK_FREE;
	return (0);
}
