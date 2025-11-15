/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:15:59 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/03 13:31:24 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isalnum('a'));
	printf("%d", ft_isalnum('g'));
	printf("%d", ft_isalnum('z'));
	printf("%d", ft_isalnum('A'));
	printf("%d", ft_isalnum('R'));
	printf("%d", ft_isalnum('Z'));
	printf("%d", ft_isalnum('0'));
	printf("%d", ft_isalnum('9'));
	printf("%d", ft_isalnum('5'));
	printf("%d", ft_isalnum('.'));
	return (0);
}*/
