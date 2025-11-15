/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:40:46 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/03 18:01:08 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char *) s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (str[i] != (unsigned char) c && i < n - 1)
	{
		i++;
		s++;
	}
	if (str[i] == (unsigned char) c)
		return ((void *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "/|\x12\xff\x09\x42\2002\42|\\";
	char	s2[] = "/|\x12\xff\x09\x42\2002\42|\\";
	char	*s3;
	char	*s4;


	s4 = ft_memchr(s, 'l', 5);
	printf("%s\n", s4);

	s3 = memchr(s2, 'l', 5);
	printf("%s", s3);
	return (0);
}*/
