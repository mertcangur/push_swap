/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 00:41:17 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 00:41:17 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	let_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	main(int argc, char **argv)
{
	t_stk	*stack_a;
	t_stk	*stack_b;
	char	**str;
	int		i;

	i = 1;
	if (argc == 1)
		return (0);
	else
	{
		while (i < argc)
		{
			str = ft_split(argv[i], ' ');
			check_error(str);
			fill_stack(str, &stack_a);
			let_free(str);
			i++;
		}
	}
	check_uniq(stack_a);
	stack_b = NULL;
	indexxing(stack_a, get_stack_size(stack_a));
	get_start(&stack_a, &stack_b, get_stack_size(stack_a));
}
