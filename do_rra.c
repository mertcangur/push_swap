/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:13:32 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:13:32 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stk	*get_last_before(t_stk *stack)
{
	while (stack && stack->next != NULL && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

void	rrewerse(t_stk **stack)
{
	t_stk	*tmp;
	t_stk	*tail;
	t_stk	*b_tail;

	tail = get_last(*stack);
	b_tail = get_last_before(*stack);
	tmp = (*stack);
	*stack = tail;
	(*stack)->next = tmp;
	b_tail->next = NULL;
}

void	rra(t_stk **stack_a)
{
	rrewerse(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stk **stack_b)
{
	rrewerse(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stk **stack_a, t_stk **stack_b)
{
	rrewerse(stack_a);
	rrewerse(stack_b);
	write(1, "rrr\n", 4);
}
