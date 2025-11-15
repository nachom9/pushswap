/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:35:46 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/09 19:01:16 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(&big[i]));
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	big[] = "lorem ipsum dolor sit amet";
	char	little[] = "ipsumm";

	printf("%s\n", ft_strnstr(big, little, 30));
	printf("%s\n", strnstr(big, little, 30));
	return (0);
}*/
