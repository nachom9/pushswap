/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:06:56 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/07 15:36:55 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_skip(char const *set, char c)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (ft_skip(set, s1[i]))
		i++;
	if (i >= ft_strlen(s1))
		return (ft_strdup(""));
	while (ft_skip(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - (i - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "hhhhh";
	char	*set = "h";
	char	*str;

	str = ft_strtrim(s1, set);
	printf("%s", str);
	free(str);
	return (0);
}*/
