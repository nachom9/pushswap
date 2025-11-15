/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:23:48 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/14 13:11:08 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static nb_list	*ft_create(nb_list *head, char	*arg)
{
	char	**str;
	int	i;
	int	nb;
	nb_list	*lst;

	i = 0;
	str = ft_split(arg, ' ');
	while (str[i])
	{
		nb = ft_atol(str[i]);
		free(str[i]);
		lst = ft_lstnew(nb);
		ft_lstadd_back(&head, lst);
		i++;
	}
	free(str);
	return (head);
}

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
		head_a = ft_create(head_a, argv[i]);
		i++;
	}
	i = 0;

	//creamos stack b
	head_b = ft_create(head_b, "10");
	head_b = ft_create(head_b, "20");
	head_b = ft_create(head_b, "30");
	head_b = ft_create(head_b, "40");
	head_b = ft_create(head_b, "50");
	
	ft_printf("\nA:\n");
	while (head_a)
	{
		ft_printf("Elemento %d: %d\n", i, head_a->number);
		head_a = head_a->next;
		i++;
	}
	i = 0;
	ft_printf("\nB:\n");
	while (head_b)
	{
		ft_printf("Elemento %d: %d\n", i, head_b->number);
		head_b = head_b->next;
		i++;
	}
	
	free(head_a);
	return (0);
}
