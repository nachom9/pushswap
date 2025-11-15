/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:15:36 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/14 11:58:49 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(nb_list *lst, void (*f)(int))
{
	while (lst != NULL)
	{
		f(lst->number);
		lst = lst->next;
	}
}
/*
void ft_up(void *c)
{
        int     i;
        char    *cc;

        i = 0;
        cc = (char *) c;
        while  (cc[i])
        {
		if (cc[i] >= 'a' && cc[i] <= 'z')
			cc[i] = cc[i] - 32;
                i++;
        }
}


#include <stdio.h>

int     main(void)
{
        nb_list  *list;

        nb_list  *node2;
        nb_list  *node3;
        nb_list  *node4;
	char	number_test[] = "test";

        list = ft_lstnew(number_test);
        node2 = ft_lstnew(number_test);
        node3 = ft_lstnew(number_test);
        node4 = ft_lstnew(number_test);

        ft_lstadd_front(&list, node4);
        ft_lstadd_front(&list, node3);
        ft_lstadd_front(&list, node2);

        printf("%s\n", (char *) node4->number);
        ft_lstiter(list, ft_up);
        printf("%s", (char *) node4->number);
        return (0);
}*/
