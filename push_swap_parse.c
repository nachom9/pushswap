/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:19:36 by nacho             #+#    #+#             */
/*   Updated: 2025/11/15 16:19:39 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_index(t_list *head_a, int nb)
{
    t_list *last;

    last = ft_lstlast(head_a);
    last->index = 0;
    while (head_a->next)
    {
        if (nb < head_a->number)
            head_a->index += 1;
        else if (nb > head_a->number)
            last->index += 1;
        else if (nb == head_a->number)
        {
            ft_printf("Error\n");
            exit(1);
        }
        head_a = head_a->next;
    }
}

t_list	*ft_parse(t_list *head, char *arg)
{
	char	**str;
	int	i;
	int	nb;
	t_list	*lst;

	i = 0;
	str = ft_split(arg, ' ');
	while (str[i])
	{
		nb = ft_atol(str[i]);
		free(str[i]);
		lst = ft_lstnew(nb);
		ft_lstadd_back(&head, lst);
        ft_index(head, nb);
		i++;
	}
	free(str);
	return (head);
}
