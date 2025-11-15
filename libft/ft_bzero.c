/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:43:31 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/03 11:51:25 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n != 0)
	{
		p[n - 1] = '\0';
		n--;
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[] = "Hello World";
	char s2[] = "Hello World";
	int i = 0;
	int j = 20;

	printf("%s\n", s);

	ft_bzero(s, j);

	printf("%s\n", s);
	while (i < j)
	{
		printf("%d", s[i]);
		i++;
	}

	i = 0;
	bzero(s2, j);
	printf("%s\n", s2);
        while (i < j)
        {
                printf("%d", s2[i]);
                i++;
        }

	return (0);
}*/
