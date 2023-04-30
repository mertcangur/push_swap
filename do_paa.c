/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_paa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:13:18 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:13:18 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	switchh(t_stk **stack1, t_stk **stack2)
{
	t_stk	*tmp;

	tmp = (*stack1)->next;
	(*stack1)->next = (*stack2);
	*stack2 = *stack1;
	*stack1 = tmp;
}

void	do_pa(t_stk **stack_a, t_stk **stack_b)
{
	switchh(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	do_pb(t_stk **stack_a, t_stk **stack_b)
{
	switchh(stack_a, stack_b);
	write(1, "pb\n", 3);
}
