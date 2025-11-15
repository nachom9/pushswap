/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:15:24 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/14 13:15:30 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(nb_list *head_a)
{
    int tmp;

    if (!head_a->number || !head_a->next->number)
        return;
    tmp = head_a->number;
    head_a->number = head_a->next->number;
    head_a->next->number = tmp;
    ft_printf("sa\n");
}

void    sb(nb_list *head_b)
{
    int tmp;

    if (!head_b->number || !head_b->next->number)
        return;
    tmp = head_b->number;
    head_b->number = head_b->next->number;
    head_b->next->number = tmp;
}

void    ss(nb_list  *head)
{
    sa(head);
    sb(head);
}