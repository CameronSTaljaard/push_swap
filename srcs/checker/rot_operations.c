/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:50:22 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/05 19:52:48 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <libft.h>

void	rr(t_stack **a, t_stack **b)
{
	rotate(a, 1);
	rotate(b, 1);
}

void	rotate(t_stack **head, int n)
{
	t_stack	*current;
	t_stack	*node_n;
	int		count;

	if (!n)
		return ;
	current = *head;
	count = 1;
	while (count < n && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return ;
	node_n = current;
	while (current->next != NULL)
		current = current->next;
	current->next = *head;
	(*head)->previous = current;
	*head = node_n->next;
	(*head)->previous = NULL;
	node_n->next = NULL;
}

void	rrr(t_stack **a, t_stack **b)
{
	rotate(a, stack_size(*a) - 1);
	rotate(b, stack_size(*b) - 1);
}
