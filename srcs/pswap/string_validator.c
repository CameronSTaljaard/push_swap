/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_validator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 19:46:06 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/10 19:46:07 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "push_swap.h"

int			string_input(char *str)
{
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
			return (TRUE);
		str++;
	}
	return (FALSE);
}
