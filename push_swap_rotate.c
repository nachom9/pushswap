/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:29:54 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/14 16:29:57 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(nb_list **head_a)
{
    nb_list *tmp;
    nb_list *last;

    if (!*head_a)
        return;
    tmp = (*head_a)->next;
    last = ft_lstlast(*head_a);
    (*head_a)->next = NULL;
    last->next = *head_a;
    *head_a = tmp;
}

void    rb(nb_list **head_b)
{
    nb_list *tmp;
    nb_list *last;

    if (!*head_b)
        return;
    tmp = (*head_b)->next;
    last = ft_lstlast(*head_b);
    (*head_b)->next = NULL;
    last->next = *head_b;
    *head_b = tmp;
}

void    rr(nb_list **head_a, nb_list **head_b)
{
    if (!*head_a || !*head_b)
        return;
    ra(head_a);
    rb(head_b);
}