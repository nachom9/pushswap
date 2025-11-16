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

void	alg_onetwo(t_list **head_a, int nodes)
{
    if (nodes == 0 || nodes == 1)
        return ;
    if (nodes == 2)
    {
        if ((*head_a)->number > (*head_a)->next->number)
            sa(*head_a, 0);
        return ;
    }
}

void	alg_three(t_list **head_a)
{
    if ((*head_a)->index == count_min_index(*head_a))
    {
        if ((*head_a)->next->index == count_min_index(*head_a) + 1)
            return;
        else
            {
                rra(head_a, 0);
                sa(*head_a, 0);
            }
    }
    else if ((*head_a)->index == count_min_index(*head_a) + 1)
    {
        if ((*head_a)->next->index == count_min_index(*head_a))
            sa(*head_a, 0);
        else if ((*head_a)->next->index == count_min_index(*head_a)+ 2)
            rra(head_a, 0);
    }
    else if ((*head_a)->index == count_min_index(*head_a) + 2)
    {
        ra(head_a, 0);
        if ((*head_a)->index == count_min_index(*head_a) + 1)
            sa(*head_a, 0);
    }
}

void	alg_four(t_list **head_a, t_list **head_b)
{
    int i;
    t_list *tmp;

    tmp = *head_a;
    i = 0;
    while (tmp && tmp->index != count_min_index(*head_a))
    {
        tmp = tmp->next;
        i++;
    }
    if (i == 3)
        rra(head_a, 0);
    else
    {
        while(i--)
            ra(head_a, 0);
    }
    pb(head_a, head_b);
    alg_three(head_a);
    pa(head_a, head_b);
}

void	alg_five(t_list **head_a, t_list **head_b)
{
    int i;
    t_list *tmp;

    tmp = *head_a;
    i = 0;
    while (tmp && tmp->index != 0)
    {
        tmp = tmp->next;
        i++;
    }
    if (i > 2)
    {
        while (i++ != 5)
            rra(head_a, 0);
    }
    else
    {
        while(i--)
            ra(head_a, 0);
    }
    pb(head_a, head_b);
    alg_four(head_a, head_b);
    pa(head_a, head_b);
}