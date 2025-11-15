/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:34:35 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/02 16:05:15 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_check(long int res)
{
	if (res > 2147483647)
	{
		ft_printf("Error: integer overflow\n");
		exit(1);
	}

	else if (res < -2147483648)
	{
		ft_printf("Error: integer underflow\n");
		exit(1);
	}
}
int	ft_atol(const char *nptr)
{
	long int	res;
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
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
	ft_check(res * sign);
	return (res * sign);
}
