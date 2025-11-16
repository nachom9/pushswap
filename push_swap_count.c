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

int count_nodes(t_list *stack)
{
    int nodes;

    nodes = 0;
    while (stack)
    {
        stack = stack->next;
        nodes++;
    }
    return (nodes);
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

int count_max_index(t_list *head)
{
    int max_index;
    
    max_index = 0;
    while (head)
    {
        if (max_index < head->index)
            max_index = head->index;
        head = head->next;
    }
    return (max_index);
}