/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortt.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:14:38 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:14:38 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_b(t_stk **stack_a, t_stk **stack_b, int size)
{
	int	pushed;
	int	i;

	i = 0;
	pushed = 0;
	while (size > 6 && i < size && pushed < size / 2)
	{
		if ((*stack_a)->index <= size / 2)
		{
			do_pb(stack_a, stack_b);
			pushed++;
		}
		else
			ra(stack_a);
		i++;
	}
	while (size - pushed > 3)
	{
		do_pb(stack_a, stack_b);
		pushed++;
	}
}

void	shift_stack(t_stk **stack_a)
{
	int	stack_size;
	int	lowest_pose;

	stack_size = get_stack_size(*stack_a);
	lowest_pose = get_lowest_pose_index(stack_a);
	if (lowest_pose > stack_size / 2)
	{
		while (lowest_pose < stack_size)
		{
			rra(stack_a);
			lowest_pose++;
		}
	}
	else
	{
		while (lowest_pose > 0)
		{
			ra(stack_a);
			lowest_pose--;
		}
	}
}

void	sort(t_stk **stack_a, t_stk **stack_b, int size)
{
	send_b(stack_a, stack_b, size);
	if (!is_sorted(*stack_a))
		little_sort(stack_a);
	while (*stack_b)
	{
		get_target_position(stack_a, stack_b);
		get_const(stack_a, stack_b);
		do_cheapest_move(stack_a, stack_b);
	}
	if (!is_sorted(*stack_a))
		shift_stack(stack_a);
}
