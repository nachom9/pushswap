/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:31:40 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/17 02:44:28 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		*lst = (*lst)->next;
		del(tmp->number);
		free(tmp);
		tmp = *lst;
	}
}
/*
void	ft_del(void *number)
{
	free(number);
}

#include <stdio.h>

int	main(void)
{
	t_list	*list;

	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	list = NULL;
	node1 = ft_lstnew("node 1");
	node2 = ft_lstnew("node 2");
	node3 = ft_lstnew("node 3");
	node4 = ft_lstnew("node 4");

	ft_lstadd_front(&list, node4);
	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);

	ft_lstclear(&list, ft_del);

	printf("%s", (char *) node4->number);
	return (0);
}*/
