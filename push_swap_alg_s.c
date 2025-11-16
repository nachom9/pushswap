/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_alg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:50:36 by nacho             #+#    #+#             */
/*   Updated: 2025/11/15 15:52:29 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	alg_onetwo(t_list **stack_a, int nodes)
{
    if (nodes == 0 || nodes == 1)
        return ;
    if (nodes == 2)
    {
        if ((*stack_a)->number > (*stack_a)->next->number)
            sa(*stack_a, 0);
        return ;
    }
}

void	alg_three(t_list **stack_a)
{
    if ((*stack_a)->index == count_min_index(*stack_a))
    {
        if ((*stack_a)->next->index == count_min_index(*stack_a) + 1)
            return;
        else
            {
                rra(stack_a, 0);
                sa(*stack_a, 0);
            }
    }
    else if ((*stack_a)->index == count_min_index(*stack_a) + 1)
    {
        if ((*stack_a)->next->index == count_min_index(*stack_a))
            sa(*stack_a, 0);
        else if ((*stack_a)->next->index == count_min_index(*stack_a)+ 2)
            rra(stack_a, 0);
    }
    else if ((*stack_a)->index == count_min_index(*stack_a) + 2)
    {
        ra(stack_a, 0);
        if ((*stack_a)->index == count_min_index(*stack_a) + 1)
            sa(*stack_a, 0);
    }
}

void	alg_four(t_list **stack_a, t_list **stack_b)
{
    int i;
    t_list *tmp;

    tmp = *stack_a;
    i = 0;
    while (tmp && tmp->index != count_min_index(*stack_a))
    {
        tmp = tmp->next;
        i++;
    }
    if (i == 3)
        rra(stack_a, 0);
    else
    {
        while(i--)
            ra(stack_a, 0);
    }
    pb(stack_a, stack_b);
    alg_three(stack_a);
    pa(stack_a, stack_b);
}

void	alg_five(t_list **stack_a, t_list **stack_b)
{
    int i;
    t_list *tmp;

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
        while(i--)
            ra(stack_a, 0);
    }
    pb(stack_a, stack_b);
    alg_four(stack_a, stack_b);
    pa(stack_a, stack_b);
}