/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 19:46:48 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/10 19:46:49 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft.h>
#include <get_next_line.h>

void		read_input(t_stack **a, t_stack **b, char args)
{
	char *line;

	while (get_next_line(0, &line))
	{
		if (checkline(line))
		{
			do_op(line, a, b, args);
			free(line);
		}
		else if (!checkline(line))
		{
			free(line);
			(*a) ? free_stack(*a) : NULL;
			(*b) ? free_stack(*b) : NULL;
			ERROR;
		}
		if (*a && sorted(*a) && !*b)
		{
			free_stack(*a);
			OK;
		}
	}
}
