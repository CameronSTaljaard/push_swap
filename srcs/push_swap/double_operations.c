/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:19:39 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/18 08:19:40 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ss(t_stackdata *a, t_stackdata *b)
{
	swap(a);
	swap(b);
}

void		rr(t_stackdata *a, t_stackdata *b)
{
	rotate(a);
	rotate(b);
}

void		rrr(t_stackdata *a, t_stackdata *b)
{
	rrx(a);
	rrx(b);
}
