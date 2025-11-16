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

void    rra(t_list **stack_a, int print_check)
{
    t_list *last;
    t_list *ndlast;

    if (!*stack_a)
        return;
    last = ft_lstlast(*stack_a);
    ndlast = ft_lstndlast(*stack_a);
    last->next = *stack_a;
    *stack_a = last;
    ndlast->next = NULL;
    if (print_check == 0)
        ft_printf("rra\n");
}

void    rrb(t_list **stack_b, int print_check)
{
    t_list *last;
    t_list *ndlast;

    if (!*stack_b)
        return;
    last = ft_lstlast(*stack_b);
    ndlast = ft_lstndlast(*stack_b);
    last->next = *stack_b;
    *stack_b = last;
    ndlast->next = NULL;
    if (print_check == 0)
        ft_printf("rrb\n");
}

void    rrr(t_list **stack_a, t_list **stack_b)
{
    rra(stack_a, 1);
    rrb(stack_b, 1);
    ft_printf("rrr\n");
}