/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:18:22 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/18 08:18:23 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			find_pos(t_stackdata *stack, int value)
{
	t_stack	*head;
	int		i;

	i = 0;
	head = stack->lst;
	while (head->value != value)
	{
		i++;
		head = head->next;
	}
	return (i);
}

void		freestack(t_stackdata *stack)
{
	while (stack->lst)
	{
		free(stack->lst);
		stack->lst = stack->lst->next;
	}
	free(stack->lst);
}

t_stackdata	normalize(t_stackdata *temp, int size, t_stackdata *a)
{
	t_stack	*head;
	t_stack	*node;
	int		i;
	int		j;
	t_stack	*temphold;

	i = 0;
	temphold = temp->lst;
	while (i++ < size)
	{
		j = 1;
		head = a->lst;
		node = a->lst;
		while (j++ < i)
			node = node->next;
		while (head)
		{
			if (head->value > node->value)
				temphold->value--;
			head = head->next;
		}
		temphold = temphold->next;
	}
	freestack(a);
	return (*temp);
}

int			moves(t_stackdata *stack, int value)
{
	int pos;

	pos = find_pos(stack, value);
	return (pos > stack_size(stack) / 2 ? stack_size(stack) - pos : pos);
}

void		temp_stack(t_stackdata *temp, int size)
{
	int i;

	i = 0;
	temp->lst = NULL;
	while (i++ < size)
		push(temp, size);
	temp->size = stack_size(temp);
}
