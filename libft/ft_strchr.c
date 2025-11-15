/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:08:53 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/03 17:35:53 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	char_c;
	char	*str;
	int		i;

	i = 0;
	char_c = (char) c;
	str = (char *) s;
	while (str[i])
	{
		if (str[i] == char_c)
			return (&str[i]);
		i++;
	}
	if (str[i] == char_c)
		return (&str[i]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int     main(void)
{
        const char      s[] = "there is so \0ma\0ny \0 
	\\0 in t\0his stri\0ng !\0\0\0\0";
        const char      s2[] = "there is so \0ma\0ny \0 
	\\0 in t\0his stri\0ng !\0\0\0\0";

	printf("%s\n", ft_strchr(s, '\0'));
	printf("%s", strchr(s2, '\0'));
        return (0);
}*/
