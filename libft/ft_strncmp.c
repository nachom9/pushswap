/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:51:22 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/03 17:52:56 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i])
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("hello", "hallo", 5));
	printf("%d", strncmp("hello", "hallo", 5));
	return (0);
}*/
