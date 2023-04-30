/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:13:48 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:13:48 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

int	ft_atoi_check(const char *str)
{
	long	i;
	long	result;
	int		sing;

	i = 0;
	sing = 1;
	result = 0;
	while (str[i] && (str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing *= -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		result = (str[i] - 48) + (result * 10);
		if (result > 2147483647 && sing == 1)
			return (1);
		else if (result > 2147483648 && sing == -1)
			return (1);
		i++;
	}
	return (0);
}

int	check_error(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (ft_atoi_check(str[i]))
			print_error();
		if ((str[i][0] == '+' || str[i][0] == '-') && is_digit(str[i][1]))
			j++;
		while (str[i][j])
		{
			if (!is_digit(str[i][j]))
				print_error();
			j++;
		}
		i++;
	}
	return (0);
}

int	check_uniq(t_stk *stack_a)
{
	t_stk	*stk1;
	t_stk	*stk2;

	stk1 = stack_a;
	while (stk1)
	{
		stk2 = stk1->next;
		while (stk2)
		{
			if (stk1->data == stk2->data)
				print_error();
			stk2 = stk2->next;
		}
		stk1 = stk1->next;
	}
	return (0);
}
