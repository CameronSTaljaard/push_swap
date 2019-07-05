/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:46:30 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/05 19:46:32 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>

int		stack_size(t_stack *a)
{
	t_stack *tmp;
	size_t	i;

	tmp = a;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

t_stack	*push_in_list(t_stack *list, int num)
{
	t_stack	*tmp;

	if ((tmp = malloc(sizeof(t_stack))) == NULL)
		return (NULL);
	tmp->number = num;
	tmp->previous = NULL;
	tmp->next = list;
	return (tmp);
}

void	push(t_stack **head_ref, int new_data)
{
	t_stack	*new_node;

	new_node = (t_stack*)malloc(sizeof(t_stack));
	new_node->number = new_data;
	new_node->next = (*head_ref);
	new_node->previous = NULL;
	if (*head_ref)
		(*head_ref)->previous = new_node;
	(*head_ref) = new_node;
}
