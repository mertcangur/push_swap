/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:12:52 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:12:52 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stk *stack)
{
	t_stk	*tmp;

	tmp = stack;
	while (tmp && tmp->next != NULL)
	{
		if (tmp->next->data < tmp->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	long	i;
	long	result;
	int		sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && (str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		result = (str[i] - 48) + (result * 10);
		if (result > 2147483647 && sign == 1)
			return (-1);
		else if (result > 2147483648 && sign == -1)
			return (0);
		i++;
	}
	return (result * sign);
}
