/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:01:51 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/13 17:10:59 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(nb_list *lst, void (*del)(int))
{
	del(lst->number);
	free(lst);
}
/*
#include <stdio.h>

static void	ft_del(void *number)
{
	free(number);
}

int	main(void)
{
	nb_list	*list = NULL;

	nb_list	*node1 = ft_lstnew("node1");
	nb_list  *node2 = ft_lstnew("node2");

	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	printf("%s\n", (char *) node2->number);
        printf("%s\n", (char *) node1->number);
	ft_lstdelone(node2, ft_del);
	printf("%s\n", (char *) node2->number);
	printf("%s", (char *) node1->number);
	return (0);
}*/
