/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:53:58 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/05 19:53:59 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft.h>

// To do: Replace pa and pb with push function


void	push_to(t_stack **to, t_stack **from)
{
	int		num;
	t_stack	*tmp;

	if (*from == NULL)
		return ;
	tmp = *from;
	num = (*from)->number;
	push(to, num);
	*from = (*from)->next;
	if (*from)
		(*from)->previous = NULL;
	free(tmp);
	ft_putendl_col_fd(GREEN, "pa", 1);
}

void	swap(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	first = *a;
	second = (*a)->next;
	first->next = second->next;
	first->previous = second;
	second->previous = NULL;
	second->next = first;
	*a = second;
}

void	ss(t_stack **a, t_stack **b)
{
	swap(b);
	swap(a);
	ft_putendl_col_fd(GREEN, "ss", 1);
}
