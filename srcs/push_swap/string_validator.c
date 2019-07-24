/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_validator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:18:51 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/18 08:18:52 by ctaljaar         ###   ########.fr       */
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
