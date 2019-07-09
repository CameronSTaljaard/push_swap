/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:49:09 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/05 19:49:11 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <push_swap.h>

t_stack	*init_stack(int ac, char **av)
{
	t_stack	*head;
	t_stack	*tmp;
	int		i;

	head = stack_new(atoi(av[1]));
	i = 1;
	while (++i < ac)
	{
		tmp = stack_new(atoi(av[i]));
		stack_add(&head, tmp);
	}
	return (head);
}

t_stack	*stack_new(int n)
{
	t_stack	*tmp;

	tmp = (t_stack *)malloc(sizeof(t_stack));
	tmp->number = n;
	tmp->previous = NULL;
	tmp->next = NULL;
	return (tmp);
}

void	stack_add(t_stack **head, t_stack *node)
{
	t_stack *tmp;

	tmp = (*(head));
	while (tmp->next)
		tmp = tmp->next;
	node->previous = tmp;
	tmp->next = node;
}

void	stack_remove(t_stack **head, int index)
{
	int		i;
	t_stack	*tmp;
	t_stack	*prv;

	tmp = *head;
	i = 0;
	while (i < index)
	{
		prv = tmp;
		tmp = tmp->next;
		i++;
	}
	if (tmp)
	{
		prv->next = NULL;
		free(tmp);
	}
}

int	sorted(t_stack *a)
{
	int temp;

	if (!a)
		return (0);
	while (a->next)
	{
		temp = a->number;
		a = a->next;
		if (temp > a->number && a)
			return (0);
	}
	return (1);
}
