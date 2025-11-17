/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:15:24 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/17 22:18:41 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *stack_a, int print_check)
{
	int	tmp;

	if (!stack_a->number || !stack_a->next->number)
		return ;
	tmp = stack_a->number;
	stack_a->number = stack_a->next->number;
	stack_a->next->number = tmp;
	tmp = stack_a->index;
	stack_a->index = stack_a->next->index;
	stack_a->next->index = tmp;
	if (print_check == 0)
		ft_printf("sa\n");
}

void	sb(t_list *stack_b, int print_check)
{
	int	tmp;

	if (!stack_b->number || !stack_b->next->number)
		return ;
	tmp = stack_b->number;
	stack_b->number = stack_b->next->number;
	stack_b->next->number = tmp;
	tmp = stack_b->index;
	stack_b->index = stack_b->next->index;
	stack_b->next->index = tmp;
	if (print_check == 0)
		ft_printf("sb\n");
}

void	ss(t_list *head)
{
	sa(head, 1);
	sb(head, 1);
	ft_printf("ss\n");
}
