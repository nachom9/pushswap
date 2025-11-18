/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_alg_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:50:36 by nacho             #+#    #+#             */
/*   Updated: 2025/11/18 21:14:09 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	alg_onetwo(t_list **stack_a, int nodes)
{
	if (nodes == 0 || nodes == 1)
		return ;
	if (nodes == 2)
	{
		if ((*stack_a)->index > (*stack_a)->next->index)
			sa(*stack_a, 0);
		return ;
	}
}

void	alg_three(t_list **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->index;
	second = (*stack_a)->next->index;
	third = (*stack_a)->next->next->index;
	if (first < second && first < third && second > third)
	{
		sa(*stack_a, 0);
		ra(stack_a, 0);
	}
	if (first > second && first < third && second < third)
		sa(*stack_a, 0);
	if (first < second && first > third && second > third)
		rra(stack_a, 0);
	if (first > second && first > third && second < third)
		ra(stack_a, 0);
	if (first > second && first > third && second > third)
	{
		ra(stack_a, 0);
		sa(*stack_a, 0);
	}
}

void	alg_four(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	tmp = *stack_a;
	i = 0;
	while (tmp && tmp->index != count_min_index(*stack_a))
	{
		tmp = tmp->next;
		i++;
	}
	if (i == 3)
		rra(stack_a, 0);
	else if (i == 2)
	{
		ra(stack_a, 0);
		ra(stack_a, 0);
	}
	else if (i == 1)
	{
		ra(stack_a, 0);
	}
	pb(stack_a, stack_b);
	alg_three(stack_a);
	pa(stack_a, stack_b);
}

void	alg_five(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	tmp = *stack_a;
	i = 0;
	while (tmp && tmp->index != 0)
	{
		tmp = tmp->next;
		i++;
	}
	if (i > 2)
	{
		while (i++ != 5)
			rra(stack_a, 0);
	}
	else
	{
		while (i--)
			ra(stack_a, 0);
	}
	pb(stack_a, stack_b);
	alg_four(stack_a, stack_b);
	pa(stack_a, stack_b);
}
