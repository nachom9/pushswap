/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:11:55 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/13 13:32:57 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*list;

	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*last_node;

	list = NULL;
	node1 = ft_lstnew("node 1");
	node2 = ft_lstnew("node 2");
	node3 = ft_lstnew("node 3");
	node4 = ft_lstnew("node 4");

	ft_lstadd_front(&list, node4);
	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);

	last_node = ft_lstlast(list);
	printf("%s", (char *) last_node->number);
	return (0);
}*/
