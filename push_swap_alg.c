/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_alg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 21:57:04 by nacho             #+#    #+#             */
/*   Updated: 2025/11/16 22:50:28 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_to_b(t_list **stack_a, t_list **stack_b, int nodes)
{
	int	delta = nodes / 20 + 7;
	int	i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= delta + i)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a, 0);
	}
}

static void	push_biggest(t_list **stack_b, int nodes)
{
	int	i;
	t_list	*tmp;

	tmp = *stack_b;
	i = 0;
	while (tmp && tmp->index != count_max_index(*stack_b))
	{
		tmp = tmp->next;
		i++;
	}
	if (i < nodes / 2)
	{
		while ((*stack_b)->index != count_max_index(*stack_b))
			rb(stack_b, 0);
	}
	else if (i > nodes / 2)
	{
		while ((*stack_b)->index != count_max_index(*stack_b))
			rrb(stack_b, 0);
	}
}

void	algorithm(t_list **stack_a, t_list **stack_b)
{
	int	nodes;

	nodes = count_nodes(*stack_a);
	if (nodes == 0 || nodes == 1)
		alg_onetwo(stack_a, nodes);
	else if (nodes == 2)
		alg_onetwo(stack_a, nodes);
	else if (nodes == 3)
		alg_three(stack_a);
	else if (nodes == 4)
		alg_four(stack_a, stack_b);
	else if (nodes == 5)
		alg_five(stack_a, stack_b);
	else if (nodes > 5)
	{
		move_to_b(stack_a, stack_b, nodes);
		while (stack_b && *stack_b)
		{
			push_biggest(stack_b, nodes);
			nodes--;
			pa(stack_a, stack_b);
		}
	}
}










