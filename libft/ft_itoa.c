/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:44:52 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/14 17:01:51 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		n_len;

	n_len = ft_n_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = malloc(n_len + 1);
	if (!result)
		return (NULL);
	result[n_len] = '\0';
	if (n < 0)
	{
		n *= -1;
		result[0] = '-';
	}
	while (n_len > 0 && result[n_len - 1] != '-')
	{
		result[--n_len] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;

	n = -623;
	//printf("The number has %d numbers\n", ft_count(n));
	printf("The number is: %s\n", ft_itoa(n));
	//free(str);
	return (0);
}*/
