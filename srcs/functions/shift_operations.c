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

void	pa(t_stack **a, t_stack **b)
{
	int		num;
	t_stack	*tmp;

	if (*b == NULL)
		return ;
	tmp = *b;
	num = (*b)->number;
	push(a, num);
	*b = (*b)->next;
	if (*b)
		(*b)->previous = NULL;
	free(tmp);
	ft_putendl_col_fd(GREEN, "pa", 1);
}

void	pb(t_stack **a, t_stack **b)
{
	int		num;
	t_stack	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	num = (*a)->number;
	push(b, num);
	*a = (*a)->next;
	free(tmp);
	ft_putendl_col_fd(GREEN, "pb", 1);
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
