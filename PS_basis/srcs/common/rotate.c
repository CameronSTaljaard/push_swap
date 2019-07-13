/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bopopovi <bopopovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 16:30:16 by bopopovi          #+#    #+#             */
/*   Updated: 2018/09/21 16:33:05 by bopopovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

void	rotate_a(t_stacks *stks)
{
	if (stks->a && stks->a->next)
		stks->a = stks->a->next;
}

void	rotate_b(t_stacks *stks)
{
	if (stks->b && stks->b->next)
		stks->b = stks->b->next;
}

void	rotate_ab(t_stacks *stks)
{
	rotate_a(stks);
	rotate_b(stks);
}
