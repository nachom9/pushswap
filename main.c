/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:23:48 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/15 15:52:31 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	i;
	t_list	*stack_a = NULL;
	t_list	*stack_b = NULL;

	if (argc == 1)
		return (0);
	i = 1;
	while (argv[i])
	{
		stack_a = ft_parse(stack_a, argv[i]);
		i++;
	}
	algorithm(&stack_a, &stack_b);
	ft_printf("A:\n");
	i = 0;
	while (stack_a)
	{
		ft_printf("Elemento %d: %d  ", i, stack_a->number);
		ft_printf("Index: %d\n", stack_a->index);
		stack_a = stack_a->next;
		i++;
	}
	/*
	i = 0;
	ft_printf("\nB:\n");
	while (stack_b)
	{
		ft_printf("Elemento %d: %d\n", i, stack_b->number);
		stack_b = stack_b->next;
		i++;
	}
	*/
	if(stack_a)
		free(stack_a);
	if(stack_b)
		free(stack_b);
	return (0);
}
