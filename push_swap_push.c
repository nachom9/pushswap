/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:13:13 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/14 14:13:14 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(nb_list **head_a, nb_list **head_b)
{
    nb_list *tmp;

    if (!*head_b)
        return;
    tmp = (*head_b)->next;
    (*head_b)->next = *head_a;
    *head_a = *head_b;
    *head_b = tmp;
}

void    pb(nb_list **head_a, nb_list **head_b)
{
    nb_list *tmp;

    if (!*head_a)
        return;
    tmp = (*head_a)->next;
    (*head_a)->next = *head_b;
    *head_b = *head_a;
    *head_a = tmp;
}
