/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:34:35 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/17 22:03:10 by nacho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_lib(t_list **stack_a, char **str, int i)
{
	ft_lstclear(stack_a);
	free(str[i]);
	free(str);
	write(2, "Error\n", 6);
	exit (1);
}

static void	ft_check(long int res, t_list *stack_a, char **str, int i)
{
	if (res < -2147483648 || res > 2147483647)
		ft_free_lib(&stack_a, str, i);
}

int	ft_atol(const char *nptr, t_list *stack_a, char **str, int j)
{
	long int	res;
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	res = 0;
	if ((nptr[i] == '-' || nptr[i] == '+') && nptr[i + 1])
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	if (!(nptr[i] >= '0' && nptr[i] <= '9') && nptr[i])
		ft_free_lib(&stack_a, str, j);
	ft_check(res * sign, stack_a, str, j);
	return (res * sign);
}
