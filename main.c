/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:23:48 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/18 21:13:39 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	order_check(t_list *stack_a)
{
	while (stack_a->next && stack_a->number < stack_a->next->number)
	{
		stack_a = stack_a->next;
		if (!stack_a->next)
			return (0);
	}
	return (1);
}

static void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit (1);
}

int	main(int argc, char *argv[])
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	i = 1;
	if (!argv[i][0])
		ft_error();
	while (argv[i])
	{
		stack_a = ft_parse(stack_a, argv[i]);
		i++;
	}
	if (!order_check(stack_a))
		return (0);
	algorithm(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	if (stack_a)
		free(stack_a);
	if (stack_b)
		free(stack_b);
	return (0);
}
