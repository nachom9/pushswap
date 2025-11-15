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
	nb_list	*head_a = NULL;
	nb_list	*head_b = NULL;

	if (argc == 1)
		return (0);
	i = 1;
	while (argv[i])
	{
		head_a = ft_parse(head_a, argv[i]);
		i++;
	}
	alg(&head_a);
	ft_printf("A:\n");
	while (head_a)
	{
		ft_printf("Elemento %d: %d  ", i, head_a->number);
		ft_printf("Index: %d\n", head_a->index);
		head_a = head_a->next;
		i++;
	}

	//creamos stack b
	head_b = ft_parse(head_b, "10");
	head_b = ft_parse(head_b, "20");
	head_b = ft_parse(head_b, "30");
	head_b = ft_parse(head_b, "40");
	head_b = ft_parse(head_b, "50");
	
	i = 0;
	/*ft_printf("\nB:\n");
	while (head_b)
	{
		ft_printf("Elemento %d: %d\n", i, head_b->number);
		head_b = head_b->next;
		i++;
	}*/
	
	free(head_a);
	return (0);
}
