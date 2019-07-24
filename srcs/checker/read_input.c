/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 19:46:48 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/18 08:21:50 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <libft.h>
#include <get_next_line.h>

void		read_input(t_stack **a, t_stack **b, char args)
{
	char 	*line;
	int		count;

	count = 0;
	while (get_next_line(0, &line))
	{
		if (checkline(line))
		{
			do_op(line, a, b, args);
			count++;
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
			(O_ENABLED) ? (MOVES) : (NULL);
			OK;
		}
	}
}

void		handle_arguments(int *ac, char ***av, char *args)
{
	if (!*ac)
		ERROR;
	*av += 1;
	*ac -= 1;
	if (!*ac)
		ERROR;
	while (is_arg(*av, args))
	{
		*av += 1;
		*ac -= 1;
	}
	if (!ac)
	{
		ft_putendl_col_fd(RED, "Too few arguments", 1);
		exit(0);
	}
}
