/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:12:40 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:12:40 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stk	*new(int nbr)
{
	t_stk	*nnew;

	nnew = malloc(sizeof(t_stk));
	nnew->data = nbr;
	nnew->index = 0;
	nnew->pos = 0;
	nnew->target_pos = 0;
	nnew->cost_a = 0;
	nnew->cost_b = 0;
	nnew->next = NULL;
	return (nnew);
}

t_stk	*get_last(t_stk *stack_a)
{
	while (stack_a && stack_a->next != NULL)
	{
		stack_a = stack_a->next;
	}
	return (stack_a);
}

void	stack_add(t_stk **stack_a, int nb)
{
	t_stk	*stack;
	t_stk	*root;

	stack = new (nb);
	root = get_last(*stack_a);
	root->next = stack;
}

int	get_stack_size(t_stk *stack)
{
	t_stk	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	fill_stack(char **argv, t_stk **stack_a)
{
	long int	nb;
	int			i;

	nb = 0;
	i = 0;
	while (argv[i])
	{
		nb = ft_atoi(argv[i]);
		if (*stack_a)
			stack_add(stack_a, (int)nb);
		else
			*stack_a = new((int)nb);
		i++;
	}
}
