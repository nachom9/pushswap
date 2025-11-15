/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:06:22 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/03 11:17:19 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	void			*str;
	unsigned char	*p;

	str = malloc(nmemb * size);
	if (str == 0)
		return (NULL);
	p = str;
	i = 0;
	while (i < size * nmemb)
	{
		p[i] = '\0';
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*str2;
	int	*str3;
	int	i;
	int	size;
	int	nmemb;

	i = 0;
	nmemb = 2000;
	size = 4000;

	str2 = calloc(nmemb, size);
	if (str2 == NULL)
		printf("puntero nulo");
	else
	{
		while (i < nmemb)
		{
			printf("%d", str2[i]);
			i++;
		}
	}

	i = 0;
	printf("\n");

	str3 = ft_calloc(nmemb, size);
	if (str3 == NULL)
		printf("puntero nulo");
	else
		while (i < nmemb)
        	{
			printf("%d", str3[i]);
			i++;
		}
	return (0);
}*/
