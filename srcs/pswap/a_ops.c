/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_ops.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <agabrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 08:06:58 by agabrie           #+#    #+#             */
/*   Updated: 2018/09/03 10:05:22 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swap(t_stackdata *stack)
{
	t_stack *temp;

	if (stack->lst && stack->lst->next)
	{
		temp = stack->lst;
		stack->lst = stack->lst->next;
		temp->next = stack->lst->next;
		stack->lst->next = temp;
	}
	return ;
}

void		push_to(t_stackdata *to, t_stackdata *from)
{
	t_stack *temp;

	temp = from->lst;
	if (from->lst)
		from->lst = from->lst->next;
	else
		return ;
	temp->next = to->lst;
	to->lst = temp;
}

void		rotate(t_stackdata *stack)
{
	t_stack *temp;
	t_stack *head;

	head = stack->lst;
	temp = stack->lst;
	if (stack->lst && stack->lst->next)
		stack->lst = stack->lst->next;
	else
		return ;
	if (temp->value > MIN_INT)
	{
		while (head->next)
			head = head->next;
		head->next = temp;
		temp->next = NULL;
	}
}

void		rrx(t_stackdata *a)
{
	t_stack *head;
	t_stack *temp;

	if (a->lst && a->lst->next)
	{
		head = a->lst;
		temp = a->lst;
	}
	else
		return ;
	if (temp->value > MIN_INT)
	{
		while (head->next->next)
			head = head->next;
		a->lst = head->next;
		a->lst->next = temp;
		head->next = NULL;
	}
}
