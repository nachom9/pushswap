/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:09:05 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/17 02:46:33 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int number)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->number = number;
	node->next = (NULL);
	return (node);
}
/*

#include <stdio.h>

int main(void)
{
    t_list *node;

    node = ft_lstnew("Hello  world");
    printf("Content: %s\n", (char *)t_list->number);
    free(node);

    return 0;
}
*/
