/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:13:26 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:13:26 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rewerse(t_stk **stack)
{
	t_stk	*head;
	t_stk	*root;

	head = (*stack);
	(*stack) = (*stack)->next;
	root = get_last(*stack);
	head->next = NULL;
	root->next = head;
}

void	ra(t_stk **stack_a)
{
	rewerse(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_stk **stack_b)
{
	rewerse(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_stk **stack_a, t_stk **stack_b)
{
	rewerse(stack_b);
	rewerse(stack_a);
	write(1, "rr\n", 3);
}
