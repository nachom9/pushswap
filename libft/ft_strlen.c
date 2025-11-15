/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:09:36 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/06 13:11:18 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = " ";
	printf("%d", ft_strlen(str));
	return (0);
}*/
