/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:14:31 by mgur              #+#    #+#             */
/*   Updated: 2023/01/09 04:14:31 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stk
{
	int				data;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stk	*next;
}	t_stk;

t_stk	*get_last_before(t_stk *stack);
t_stk	*new(int nbr);
t_stk	*get_last(t_stk *stack_a);
void	fill_stack(char **argv, t_stk **stack_a);
void	swap(t_stk **stack);
void	sa(t_stk **stack_a);
void	sb(t_stk **stack_b);
void	rewerse(t_stk **stack_a);
void	stack_add(t_stk **stack_a, int nb);
void	do_pa(t_stk **stack_a, t_stk **stack_b);
void	do_pb(t_stk **stack_a, t_stk **stack_b);
void	rrb(t_stk **stack_b);
void	rb(t_stk **stack_b);
void	ra(t_stk **stack_a);
void	rrewerse(t_stk **stack);
void	switchh(t_stk **stack1, t_stk **stack2);
void	rra(t_stk **stack_a);
void	little_sort(t_stk **stack_a);
void	get_start(t_stk **stack_a, t_stk **stack_b, int size);
void	indexxing(t_stk *stack_a, int size);
void	rrr(t_stk **stack_a, t_stk **stack_b);
void	rr(t_stk **stack_a, t_stk **stack_b);
void	ss(t_stk **stack_a, t_stk **stack_b);
void	get_const(t_stk **stack_a, t_stk **stack_b);
void	do_cheapest_move(t_stk **stack_a, t_stk **stack_b);
void	do_move(t_stk **stack_a, t_stk **stack_b, int cost_a, int cost_b);
void	do_rotate_b(t_stk **stack_b, int *cost);
void	do_rotate_a(t_stk **stack_a, int *cost);
void	get_target_position(t_stk **stack_a, t_stk **stack_b);
void	send_b(t_stk **stack_a, t_stk **stack_b, int size);
void	shift_stack(t_stk **stack_a);
void	sort(t_stk **stack_a, t_stk **stack_b, int size);
void	print_error(void);
void	position(t_stk **stack);
int		get_lowest_pose_index(t_stk **stack);
int		get_target(t_stk **stack_a, int b_indx, int target_indx, int target);
int		check_uniq(t_stk *stack_a);
int		is_sorted(t_stk *stack);
int		find_max(t_stk *stack);
int		get_stack_size(t_stk *stack);
int		nb_abs(int nbr);
int		check_error(char **str);
int		is_digit(int c);
int		ft_atoi_check(const char *str);
int		ft_atoi(const char *str);
void	do_rotate_both(t_stk **stcak_a, \
t_stk **stack_b, int *cost_a, int *cost_b);
void	do_rev_rotate_both(t_stk **stcak_a, \
t_stk **stack_b, int *cost_a, int *cost_b);
char	**ft_split(const char *s, char c);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_toklen(const char *s, char c);

#endif
