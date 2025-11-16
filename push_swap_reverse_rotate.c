/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:55:23 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/14 16:55:24 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_lstndlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next->next != NULL)
		lst = lst->next;
	return (lst);
}

void    rra(t_list **head_a, int print_check)
{
    t_list *last;
    t_list *ndlast;

    if (!*head_a)
        return;
    last = ft_lstlast(*head_a);
    ndlast = ft_lstndlast(*head_a);
    last->next = *head_a;
    *head_a = last;
    ndlast->next = NULL;
    if (print_check == 0)
        ft_printf("rra\n");
}

void    rrb(t_list **head_b, int print_check)
{
    t_list *last;
    t_list *ndlast;

    if (!*head_b)
        return;
    last = ft_lstlast(*head_b);
    ndlast = ft_lstndlast(*head_b);
    last->next = *head_b;
    *head_b = last;
    ndlast->next = NULL;
    if (print_check == 0)
        ft_printf("rrb\n");
}

void    rrr(t_list **head_a, t_list **head_b)
{
    rra(head_a, 1);
    rrb(head_b, 1);
    ft_printf("rrr\n");
}