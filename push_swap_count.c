/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:19:57 by nacho             #+#    #+#             */
/*   Updated: 2025/11/16 16:19:58 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_nodes(t_list **head_a, t_list **head_b)
{
    int nodes;
    t_list *head;

    head = *head_a;
    nodes = 0;
    while (*head_a)
    {
        *head_a = (*head_a)->next;
        nodes++;
    }
    *head_a = head;
    if (nodes == 0 || nodes == 1 || nodes == 2)
        alg_onetwo(head_a, nodes);
    if (nodes == 3)
        alg_three(head_a);
    if (nodes == 4)
        alg_four(head_a, head_b);
    if (nodes == 5)
        alg_five(head_a, head_b);
    return (0);
}

int count_min_index(t_list *head)
{
    int min_index;
    
    while (head)
    {
        if (min_index > head->index)
            min_index = head->index;
        head = head->next;
    }
    return (min_index);
}