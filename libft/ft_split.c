/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:37:15 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/08 16:19:20 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**ft_free_all(char **s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(s[i]);
		i++;
	}
	free (s);
	return (NULL);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}

static size_t	ft_count_char(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**str;
	size_t	words;

	i = 0;
	words = ft_count_words(s, c);
	str = (char **)malloc((words + 1) * (sizeof(char *)));
	if (!str)
		return (NULL);
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		str[i] = malloc (ft_count_char(s, c) + 1 * sizeof(char));
		if (!str[i])
			return (ft_free_all(str, i));
		ft_strlcpy (str[i], s, (ft_count_char(s, c) + 1));
		s += ft_count_char(s, c);
		i++;
	}
	str[i] = NULL;
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s = "      hello         world       bye        ";
	char **str;
	int	i = 0;

	str = ft_split(s, ' ');
	while(str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	free(str);
	return (0);
}*/
