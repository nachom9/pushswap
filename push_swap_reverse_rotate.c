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

static nb_list	*ft_lstndlast(nb_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next->next != NULL)
		lst = lst->next;
	return (lst);
}

void    rra(nb_list **head_a)
{
    nb_list *last;
    nb_list *ndlast;

    if (!*head_a)
        return;
    last = ft_lstlast(*head_a);
    ndlast = ft_lstndlast(*head_a);
    last->next = *head_a;
    *head_a = last;
    ndlast->next = NULL;
}

void    rrb(nb_list **head_b)
{
    nb_list *last;
    nb_list *ndlast;

    if (!*head_b)
        return;
    last = ft_lstlast(*head_b);
    ndlast = ft_lstndlast(*head_b);
    last->next = *head_b;
    *head_b = last;
    ndlast->next = NULL;
}

void    rrr(nb_list **head_a, nb_list **head_b)
{
    rra(head_a);
    rrb(head_b);
}