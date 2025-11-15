/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:05:35 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/03 18:04:55 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*c_s1;
	unsigned const char	*c_s2;
	size_t				i;

	c_s1 = (unsigned const char *) s1;
	c_s2 = (unsigned const char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (*c_s1 == *c_s2 && i < n - 1)
	{
		c_s1++;
		c_s2++;
		i++;
	}
	return (*c_s1 - *c_s2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const int	s1[] = {1, 2, 3, 5};
	const int	s2[] = {1, 2, 4, 4};

	printf("My function: %d\n", ft_memcmp(s1, s2, 12));
	printf("Og function: %d\n", memcmp(s1, s2, 12));
	return (0);
}*/
