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

	if (ac < 3)
		INVALID_USE;
	if (!(input_valid(ac, av)))
		ERROR;
	a = init_stack(ac, av);
	b = NULL;
	while (get_next_line(0, &line))
	{
		if (checkline(line))
			do_op(line, &a, &b, 1);
		else
			ERROR;
	}
	return (0);
}
