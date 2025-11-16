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
	t_list	*head_a = NULL;
	t_list	*head_b = NULL;

	if (argc == 1)
		return (0);
	i = 1;
	while (argv[i])
	{
		head_a = ft_parse(head_a, argv[i]);
		i++;
	}
	count_nodes(&head_a, &head_b);
	ft_printf("A:\n");
	i = 0;
	while (head_a)
	{
		ft_printf("Elemento %d: %d  ", i, head_a->number);
		ft_printf("Index: %d\n", head_a->index);
		head_a = head_a->next;
		i++;
	}
	/*
	i = 0;
	ft_printf("\nB:\n");
	while (head_b)
	{
		ft_printf("Elemento %d: %d\n", i, head_b->number);
		head_b = head_b->next;
		i++;
	}
	*/
	if(head_a)
		free(head_a);
	if(head_b)
		free(head_b);
	return (0);
}
