/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:18:58 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/09 19:32:40 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (n > i)
	{
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[] = NULL;
	char src[] = NULL;
	char dest2[] = NULL;
        char src2[] = NULL;
	int n = 0;

	printf("%s\n",dest);
	ft_memcpy(dest, src, n);
	printf("%s", dest);

	printf("\n\n");

	printf("%s\n",dest2);
	memcpy(dest2, src2, n);
        printf("%s", dest2);

	return (0);
}
*/
