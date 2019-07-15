/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <agabrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:16:42 by agabrie           #+#    #+#             */
/*   Updated: 2018/09/03 11:15:24 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a_end(t_ps *ps)
{
	while (ABV != HV(&ps->a))
	{
		if (find_pos(&ps->a, highest_val(&ps->a)) < (lst_size(&ps->a) / 2))
		{
			RULE("ra");
		}
		else
		{
			RULE("rra");
		}
	}
}

void	pushreturn_to_a(t_ps *ps)
{
	while (B)
	{
		if (HV(&ps->a) < HV(&ps->b))
			RULE("rb");
		if (A->value < HV(&ps->b))
			RULE("ra");
		if (check_largest(&ps->b) && B->value > LV(AS))
			RULE("pa");
		if (!B || ((ABV > HV(&ps->b)) && (ABV < A->value)))
			RULE("rra");
		if (HV(&ps->b) != B->value)
		{
			if (find_pos(&ps->b, HV(&ps->b)) < (lst_size(&ps->a) / 2))
			{
				while (HV(&ps->b) != B->value)
					RULE("rb");
			}
			else
				while (HV(&ps->b) != B->value)
					RULE("rrb");
		}
		RULE("pa");
	}
	rotate_a_end(ps);
}

void	return_to_a(t_ps *ps)
{
	while (B)
	{
		if ((BB) && moves(BS, HV(BS)) < moves(BS, NH(BS)))
		{
			while (B->value != HV(BS))
			{
				rotateb(ps, BHP(HV(BS)), (lst_size(BS) / 2));
			}
			RULE("pa");
		}
		else
		{
			if (lst_size(BS) > 2)
				secondhighest(ps);
			else if (B->value != HV(BS))
			{
				RULE("sb");
			}
			else
				RULE("pa");
		}
	}
}

void	rotate_b(t_ps *ps, int i)
{
	int	a;

	if ((A && BB) && A->value < HV(&ps->b) && A->value > LV(&ps->b))
	{
		a = highest_under(&ps->b, A->value);
		if (find_pos(&ps->b, a) < lst_size(&ps->b) / 2)
		{
			while (highest_under(&ps->b, A->value) != B->value)
			{
				++i;
				RULE("rb");
			}
		}
		else
		{
			while (highest_under(&ps->b, A->value) != B->value)
			{
				++i;
				RULE("rrb");
			}
		}
	}
}
