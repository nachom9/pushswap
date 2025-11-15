/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:17:50 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/02 13:27:33 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned int	i;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char s[] = "hello world";

	printf("%s\n", s);

	ft_memset(s, '.', 5);

	printf("%s\n", s);
	return (0);
}*/
