/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:15:24 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/16 18:11:31 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_list *head_a, int print_check)
{
	int	tmp;

	if (!head_a->number || !head_a->next->number)
		return ;
	tmp = head_a->number;
	head_a->number = head_a->next->number;
	head_a->next->number = tmp;
	tmp = head_a->index;
	head_a->index = head_a->next->index;
	head_a->next->index = tmp;
	if (print_check == 0)
		ft_printf("sa\n");
}

void	sb(t_list *head_b, int print_check)
{
	int	tmp;

	if (!head_b->number || !head_b->next->number)
		return ;
	tmp = head_b->number;
	head_b->number = head_b->next->number;
	head_b->next->number = tmp;
	tmp = head_b->index;
	head_b->index = head_b->next->index;
	head_b->next->index = tmp;
	if (print_check == 0)
		ft_printf("sb\n");
}

void	ss(t_list *head)
{
	sa(head, 1);
	sb(head, 1);
	ft_printf("ss\n");
}
