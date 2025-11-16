/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:23:04 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/16 18:54:00 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int))
{
	t_list	*new;
	t_list	*node;
	int		new_number;

	if (!lst || !del || !f)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		new_number = f(lst->number);
		node = ft_lstnew(new_number);
		if (!node)
		{
			del(new_number);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
/*
static void	ft_del(void *number)
{
	free(number);
}

static void *ft_up(void *c)
{
	int	i;
	char	*cc;

	i = 0;
	cc = (char *) c;
	while  (cc[i])
	{
		if (cc[i] >= 'a' && cc[i] <= 'z')
			cc[i] = cc[i] - 32;
		i++;
	}
	return (c);
}



#include <stdio.h>

int	main(void)
{
	t_list	*list;

	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	char	number_test[] = "test";

	list = ft_lstnew(number_test);
	node2 = ft_lstnew(number_test);
	node3 = ft_lstnew(number_test);
	node4 = ft_lstnew(number_test);

	ft_lstadd_front(&list, node4);
	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);

	printf("%s\n", (char *) node4->number);
	ft_lstmap(list, ft_up, ft_del);
	printf("%s", (char *) node4->number);
	return (0);
}*/
