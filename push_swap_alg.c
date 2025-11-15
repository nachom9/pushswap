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

void	alg(nb_list **head_a)
{
    nb_list *p_head;

    p_head = *head_a;
    while((*head_a)->next)
    {
        if ((*head_a)->number > (*head_a)->next->number)
        {
            sa(*head_a);
            *head_a = p_head;
        }
        else
            *head_a = (*head_a)->next;
    }
    *head_a = p_head;

}
