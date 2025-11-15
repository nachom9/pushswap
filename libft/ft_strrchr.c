/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:07:47 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/06 13:39:46 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s);
	if (c == '\0')
		return ((char *) &s[j]);
	while (i < j)
	{
		if (s[j - i] == (char) c)
			return ((char *)&s[j - i]);
		i++;
	}
	if (s[j - i] == (char) c)
		return ((char *) &s[j - i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	s[] = "teste";
	const char      s2[] = "teste";

	printf("%s\n", ft_strrchr(s, '\0'));
	printf("%s", strrchr(s2, '\0'));
	return (0);
}*/
