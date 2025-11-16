/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:35:24 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/13 13:40:24 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*list = NULL;
	t_list	*node1;
	t_list	*node2;
	t_list  *node3;
	t_list  *node4;
	t_list  *node5;

	node1 = ft_lstnew("node1");
	node2 = ft_lstnew("node2");
	node3 = ft_lstnew("node3");
	node4 = ft_lstnew("node4");
	node5 = ft_lstnew("node5");
	ft_lstadd_front(&list, node5);
	ft_lstadd_front(&list, node4);
	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);

	printf("%d", ft_lstsize(list));
	return (0);
}*/
