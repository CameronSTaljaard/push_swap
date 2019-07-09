/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_overflows.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctaljaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 20:11:28 by ctaljaar          #+#    #+#             */
/*   Updated: 2019/07/05 20:11:30 by ctaljaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_int_overflows(const char *str)
{
	int		i;
	long	res;
	int 	neg;

	i = 0;
	res = 0;
	neg = 1;
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		if (res > MAX_INT)
			return (1);
	res *= -1;
	if (neg == -1)
		if (res < MIN_INT)
			return (1);
	return (0);
}
