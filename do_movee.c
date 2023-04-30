/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_movee.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:13:11 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:13:11 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rev_rotate_both(t_stk **stcak_a,
t_stk **stack_b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		rrr(stcak_a, stack_b);
	}
}

void	do_rotate_both(t_stk **stcak_a,
t_stk **stack_b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		(*cost_a)--;
		(*cost_b)--;
		rr(stcak_a, stack_b);
	}
}

void	do_rotate_a(t_stk **stack_a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ra(stack_a);
			(*cost)--;
		}
		else
		{
			rra(stack_a);
			(*cost)++;
		}
	}
}

void	do_rotate_b(t_stk **stack_b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			rb(stack_b);
			(*cost)--;
		}
		else
		{
			rrb(stack_b);
			(*cost)++;
		}
	}
}

void	do_move(t_stk **stack_a, t_stk **stack_b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		do_rev_rotate_both(stack_a, stack_b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		do_rotate_both(stack_a, stack_b, &cost_a, &cost_b);
	do_rotate_a(stack_a, &cost_a);
	do_rotate_b(stack_b, &cost_b);
	do_pa(stack_a, stack_b);
}
