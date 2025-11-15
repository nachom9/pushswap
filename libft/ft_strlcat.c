/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:08:38 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/03 12:28:54 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len_dst;
	unsigned int	len_src;
	unsigned int	i;

	len_dst = 0;
	len_src = 0;
	i = 0;
	while (src[len_src])
		len_src++;
	while (dst[len_dst] && len_dst < size)
		len_dst++;
	if (len_dst == size)
		return (len_src + len_dst);
	while (src[i] && i < size - len_dst - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	dst[] = "hello world";
	char	src[] = "";

	char    dst2[] = "hello world";
        char    src2[] = "";

	printf("Len: %zu", ft_strlcat(dst, src, 0));
	printf(" modified: %s\n", dst);

	printf("Len: %zu", strlcat(dst2, src2, 0));
        printf(" modified: %s\n", dst2);
	return  (0);
}*/
