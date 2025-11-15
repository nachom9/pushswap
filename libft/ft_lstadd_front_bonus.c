/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:57:24 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/13 13:36:55 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(nb_list **lst, nb_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    nb_list *list = NULL;
    nb_list *new_node;

    new_node = ft_lstnew("First node");

    ft_lstadd_front(&list, new_node);

    new_node = ft_lstnew("second node");

    ft_lstadd_front(&list, new_node);

    nb_list *temp = list;
    while (temp)
    {
        printf("Content: %s\n", (char *)temp->number);
        temp = temp->next;
    }

    while (list)
    {
        nb_list *next = list->next;
        free(list);
        list = next;
    }

    return (0);
}
*/
