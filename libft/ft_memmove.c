/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:54:45 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/03 16:32:02 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str_dest;
	unsigned char	*str_src;

	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (str_dest >= str_src)
	{
		while (n > 0)
		{
			str_dest[n - 1] = str_src[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(str_dest, str_src, n);
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char src[] = "consectetur";
	char dest[] = "loremipsum dolor sit a";
	int n = 0;
	char src2[] = "consectetur";
        char dest2[] = "loremipsum dolor sit a";

	printf("Original: %s\n", dest);
//	ft_memmove(dest, src, n);
//	printf("Modified: %s\n\n", dest);
	printf("Modified: %s\n\n", (char *) ft_memmove(dest, src, n));

	printf("Original 2: %s\n", dest2);
        //memmove(dest2, src2, n);
        printf("Modified 2: %s\n", (char *) memmove(dest2, src2, n));
	return (0);
}*/
