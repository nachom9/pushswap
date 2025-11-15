/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:09:05 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/13 13:33:34 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

nb_list	*ft_lstnew(int number)
{
	nb_list	*nodo;

	nodo = malloc(sizeof(nb_list));
	if (!nodo)
		return (NULL);
	nodo->number = number;
	nodo->next = (NULL);
	return (nodo);
}
/*

#include <stdio.h>

int main(void)
{
    nb_list *node;

    node = ft_lstnew("Hello  world");
    printf("Content: %s\n", (char *)nb_list->number);
    free(node);

    return 0;
}
*/
