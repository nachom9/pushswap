/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:27:50 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/14 12:20:04 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *) malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return ((char *) str);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", ft_strdup("hello"));
	printf("%s", strdup("hello"));
	return (0);
}*/
