/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_start.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:13:57 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:13:57 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_start(t_stk **stack_a, t_stk **stack_b, int size)
{
	if (size == 2 && !is_sorted((*stack_a)))
		sa(stack_a);
	else if (size == 3 && !is_sorted((*stack_a)))
		little_sort(stack_a);
	else if (size > 3 && !is_sorted(*stack_a))
		sort(stack_a, stack_b, size);
}
