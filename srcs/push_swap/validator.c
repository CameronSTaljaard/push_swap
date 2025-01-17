/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:19:08 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/18 08:19:09 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "push_swap.h"

int			has_doubles(int ac, char **av)
{
	int	*arr;
	int	i;
	int j;

	i = 0;
	arr = (int *)malloc(sizeof(int) * ac - 1);
	while (++i < ac)
		arr[i] = ft_atoi(av[i]);
	i = 0;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	free(arr);
	return (0);
}

int			int_check(char *str)
{
	if (*str == '-')
	{
		if (ft_strlen(str) > 11 || ft_int_overflows(str))
			return (FALSE);
	}
	else if (ft_strlen(str) > 10 || ft_int_overflows(str))
		return (FALSE);
	return (TRUE);
}

int			only_digits(char *str)
{
	if (*str == '-')
		str++;
	while (*str && ft_isdigit(*str))
		str++;
	if (!*str)
		return (TRUE);
	return (FALSE);
}

int			input_valid(int ac, char **av)
{
	if (string_input(av[0]))
	{
		if (ac > 1)
			ERROR;
	}
	else if (!int_input_check(ac, av))
		ERROR;
	return (1);
}

int			int_input_check(int ac, char **av)
{
	int i;

	i = 0;
	while (i < ac)
	{
		if (!only_digits(av[i]))
			return (FALSE);
		if (!int_check(av[i]))
			return (FALSE);
		if (has_doubles(ac, av))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
