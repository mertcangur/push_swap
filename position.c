/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:14:25 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:14:25 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	position(t_stk **stack)
{
	t_stk	*tmp;
	int		i;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}

int	get_lowest_pose_index(t_stk **stack)
{
	t_stk	*tmp;
	int		lowest_inx;
	int		lowest_pose;

	tmp = *stack;
	lowest_inx = tmp->index;
	position(stack);
	lowest_pose = tmp->pos;
	while (tmp)
	{
		if (tmp->index < lowest_inx)
		{
			lowest_inx = tmp->index;
			lowest_pose = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (lowest_pose);
}

int	get_target(t_stk **stack_a, int b_indx, int target_indx, int target)
{
	t_stk	*tmp_a;

	tmp_a = *stack_a;
	while (tmp_a)
	{
		if (tmp_a->index > b_indx && tmp_a->index < target_indx)
		{
			target_indx = tmp_a->index;
			target = tmp_a->pos;
		}
		tmp_a = tmp_a->next;
	}
	if (target_indx != 2147483647)
		return (target);
	tmp_a = *stack_a;
	while (tmp_a)
	{
		if (tmp_a->index < target_indx)
		{
			target_indx = tmp_a->index;
			target = tmp_a->pos;
		}
		tmp_a = tmp_a->next;
	}
	return (target);
}

void	get_target_position(t_stk **stack_a, t_stk **stack_b)
{
	t_stk	*tmp_b;
	int		target_pos;

	tmp_b = *stack_b;
	position(stack_a);
	position(stack_b);
	target_pos = 0;
	while (tmp_b)
	{
		target_pos = get_target(stack_a, tmp_b->index, 2147483647, target_pos);
		tmp_b->target_pos = target_pos;
		tmp_b = tmp_b->next;
	}
}
