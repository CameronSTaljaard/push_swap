/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 20:18:31 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/05 20:18:32 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>

int			is_arg(char **str, char *args)
{
	if (ft_strequ(*str, "-v"))
	{
		if (*args & 1)
			ERROR;
		*args += 1;
		return (1);
	}
	if (ft_strequ(*str, "-c"))
	{
		if (*args & (1 << 1))
			ERROR;
		*args += 2;
		return (1);
	}
	return (0);
}

int	has_doubles(int ac, char **av)
{
	int	*arr;
	int	i;
	int j;

	i = 1;
	arr = (int *)malloc(sizeof(int) * ac - 1);
	while (++i < ac)
		arr[i] = ft_atoi(av[i]);
	i = 2;
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

int	int_check(char *str)
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

int	only_digits(char *str)
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
	int	i;
	char **str;

	i = 0;
	if (string_input(av[1]))
	{
		if (ac > 2)
			ERROR;
		str = ft_strsplit(av[1], ' ');
		string_input_valid(str);
	}
	else
		int_input_check(ac, av);
	return (1);
}
