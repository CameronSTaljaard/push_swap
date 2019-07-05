/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:37:54 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/05 19:37:55 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft.h>

void	do_op(char *line, t_stack **a, t_stack **b, int c)
{
	if (ft_strequ(line, "sa"))
		sa(a);
	else if (ft_strequ(line, "sb"))
		sb(b);
	else if (ft_strequ(line, "ss"))
		ss(a, b);
	else if (ft_strequ(line, "pa"))
		pa(a, b);
	else if (ft_strequ(line, "pb"))
		pb(a, b);
	else if (ft_strequ(line, "ra"))
		rotate(a, 1);
	else if (ft_strequ(line, "rb"))
		rotate(b, 1);
	else if (ft_strequ(line, "rr"))
		rr(a, b);
	else if (ft_strequ(line, "rra"))
		rotate(a, stack_size(*a) - 1);
	else if (ft_strequ(line, "rrb"))
		rotate(b, stack_size(*b) - 1);
	else if (ft_strequ(line, "rrr"))
		rrr(a, b);
	if (c)
		visualize(*a, *b, c, line);
}

int		check_op(char *line)
{
	if (ft_strequ(line, "sa") || ft_strequ(line, "sb"))
		return (1);
	else if (ft_strequ(line, "pa") || ft_strequ(line, "pb"))
		return (1);
	else if (ft_strequ(line, "ss"))
		return (1);
	else if (ft_strequ(line, "ra") || ft_strequ(line, "rb"))
		return (1);
	else if (ft_strequ(line, "rr") || ft_strequ(line, "rrr"))
		return (1);
	else if (ft_strequ(line, "rra") || ft_strequ(line, "rrb"))
		return (1);
	return (0);
}

int		checkline(char *line)
{
	if (line)
	{
		if (check_op(line))
			return (1);
		else
			return (0);
		return (1);
	}
	else
		return (0);
}
