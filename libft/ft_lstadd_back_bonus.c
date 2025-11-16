/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:56:26 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/13 14:57:47 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
		ft_lstadd_front(lst, new);
	else
	{
		tmp = *lst;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*list = NULL;

	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*last_node;
	t_list	*last_node2;

	list = NULL;
	node1 = ft_lstnew("node 1");
	node2 = ft_lstnew("node 2");
	node3 = ft_lstnew("node 3");
	node4 = ft_lstnew("node 4");
	last_node = ft_lstnew("last node");

	ft_lstadd_front(&list, node4);
	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);

	ft_lstadd_back(&list, last_node);
	last_node2 = ft_lstlast(list);

	t_list  *last_node;
        t_list  *last_node2;

	last_node = ft_lstnew("last node");
	ft_lstadd_back(&list, last_node);
        last_node2 = ft_lstlast(list);
	printf("%s", (char *) last_node2->number);
	return (0);
}*/
