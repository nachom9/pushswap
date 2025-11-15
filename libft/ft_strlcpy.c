/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:58:07 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/03 16:43:21 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	len_src = 0;
	i = 0;
	while (src[len_src])
		len_src++;
	if (size == 0)
		return (len_src);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char dst[] = "hello world";
	char src[] = "goodbye planet";

	char dst2[] = "hello world";
        char src2[] = "goodbye planet";

	printf("src mide: %zu\n", ft_strlcpy(dst, src, 14));
	printf("Destino: %s\n\n", dst);

	printf("src2 mide: %zu\n", strlcpy(dst2, src2, 14));
        printf("Destino 2: %s\n", dst2);
	return (0);
}*/
