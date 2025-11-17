/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:29:54 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/17 22:21:32 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a, int print_check)
{
	t_list	*tmp;
	t_list	*last;

	if (!*stack_a)
		return ;
	tmp = (*stack_a)->next;
	last = ft_lstlast(*stack_a);
	(*stack_a)->next = NULL;
	last->next = *stack_a;
	*stack_a = tmp;
	if (print_check == 0)
		ft_printf("ra\n");
}

void	rb(t_list **stack_b, int print_check)
{
	t_list	*tmp;
	t_list	*last;

	if (!*stack_b)
		return ;
	tmp = (*stack_b)->next;
	last = ft_lstlast(*stack_b);
	(*stack_b)->next = NULL;
	last->next = *stack_b;
	*stack_b = tmp;
	if (print_check == 0)
		ft_printf("rb\n");
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
	ra(stack_a, 1);
	rb(stack_b, 1);
	ft_printf("rr\n");
}
