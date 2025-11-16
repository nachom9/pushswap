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

void    ra(t_list **head_a, int print_check)
{
    t_list *tmp;
    t_list *last;

    if (!*head_a)
        return;
    tmp = (*head_a)->next;
    last = ft_lstlast(*head_a);
    (*head_a)->next = NULL;
    last->next = *head_a;
    *head_a = tmp;
    if (print_check == 0)
        ft_printf("ra\n");
}

void    rb(t_list **head_b, int print_check)
{
    t_list *tmp;
    t_list *last;

    if (!*head_b)
        return;
    tmp = (*head_b)->next;
    last = ft_lstlast(*head_b);
    (*head_b)->next = NULL;
    last->next = *head_b;
    *head_b = tmp;
    if (print_check == 0)
        ft_printf("rb\n");
}

void    rr(t_list **head_a, t_list **head_b)
{
    if (!*head_a || !*head_b)
        return;
    ra(head_a, 1);
    rb(head_b, 1);
    ft_printf("rr\n");
}