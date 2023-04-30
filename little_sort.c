/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:14:09 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:14:09 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stk *stack)
{
	int	max;

	max = stack->index;
	if (stack->next->index > max)
		max = stack->next->index;
	if (stack->next->next->index > max)
		max = stack->next->next->index;
	return (max);
}

void	little_sort(t_stk **stack_a)
{
	int	max;

	max = find_max((*stack_a));
	if ((*stack_a)->index == max)
		ra(stack_a);
	else if ((*stack_a)->next->index == max)
		rra(stack_a);
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}
