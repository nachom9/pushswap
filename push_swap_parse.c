/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:19:36 by nacho             #+#    #+#             */
/*   Updated: 2025/11/18 17:37:27 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_list **stack_a, char **str)
{
	ft_lstclear(stack_a);
	free(str);
	write(2, "Error\n", 6);
	exit (1);
}

static int	ft_index(t_list *stack_a, int nb, char **str)
{
	t_list	*last;
	t_list	*tmp;

	tmp = stack_a;
	last = ft_lstlast(stack_a);
	last->index = 0;
	while (stack_a->next)
	{
		if (nb < stack_a->number)
			stack_a->index += 1;
		else if (nb > stack_a->number)
			last->index += 1;
		else if (nb == stack_a->number)
			ft_free(&tmp, str);
		stack_a = stack_a->next;
	}
	return (1);
}

t_list	*ft_parse(t_list *head, char *arg)
{
	char	**str;
	int		i;
	int		nb;
	t_list	*lst;

	i = 0;
	str = ft_split(arg, ' ');
	while (str[i])
	{
		nb = ft_atol(str[i], head, str, i);
		free(str[i]);
		lst = ft_lstnew(nb);
		ft_lstadd_back(&head, lst);
		if (!ft_index(head, nb, str))
			ft_free(&head, str);
		i++;
	}
	free(str);
	return (head);
}
