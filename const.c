/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:13:03 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:13:03 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_const(t_stk **stack_a, t_stk **stack_b)
{
	t_stk	*tmp_b;
	int		size_a;
	int		size_b;

	tmp_b = *stack_b;
	size_a = get_stack_size(*stack_a);
	size_b = get_stack_size(*stack_b);
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->pos;
		if (tmp_b->pos > size_b / 2)
			tmp_b->cost_b = (size_b - tmp_b->pos) * -1;
		tmp_b->cost_a = tmp_b->target_pos;
		if (tmp_b->cost_a > size_a / 2)
			tmp_b->cost_a = (size_a - tmp_b->target_pos) * -1;
		tmp_b = tmp_b->next;
	}
}

int	nb_abs(int nbr)
{
	if (nbr < 0)
		nbr *= -1;
	return (nbr);
}

void	do_cheapest_move(t_stk **stack_a, t_stk **stack_b)
{
	t_stk	*tmp;
	int		cheapest;
	int		cost_a;
	int		cost_b;

	tmp = *stack_b;
	cheapest = 2147483647;
	while (tmp)
	{
		if (nb_abs(tmp->cost_a) + nb_abs(tmp->cost_b) < nb_abs(cheapest))
		{
			cheapest = nb_abs(tmp->cost_a) + nb_abs(tmp->cost_b);
			cost_a = tmp->cost_a;
			cost_b = tmp->cost_b;
		}
		tmp = tmp->next;
	}
	do_move(stack_a, stack_b, cost_a, cost_b);
}
