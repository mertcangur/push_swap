/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:13:41 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:13:41 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stk **stack)
{
	int	datam;
	int	indks;

	datam = (*stack)->data;
	indks = (*stack)->index;
	(*stack)->data = (*stack)->next->data;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->data = datam;
	(*stack)->next->index = indks;
}

void	sa(t_stk **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_stk **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_stk **stack_a, t_stk **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
