/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:14:03 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:14:03 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexxing(t_stk *stack_a, int size)
{
	t_stk	*ptr;
	t_stk	*highest;
	int		value;

	while (size > 0)
	{
		ptr = stack_a;
		value = -2147483648;
		highest = NULL;
		while (ptr)
		{
			if (ptr->data > value && ptr->index == 0)
			{
				value = ptr->data;
				highest = ptr;
			}
			else
				ptr = ptr->next;
		}
		if (highest != NULL)
			highest->index = size;
		size--;
	}
}
