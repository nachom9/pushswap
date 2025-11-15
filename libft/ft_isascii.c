/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:24:29 by imelero-          #+#    #+#             */
/*   Updated: 2025/09/29 12:41:28 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isascii('a'));
	printf("%d", ft_isascii('-'));
	printf("%d", ft_isascii('_'));
	printf("%d", ft_isascii('4'));
	printf("%d", ft_isascii('g'));
	printf("%d", ft_isascii('?'));
	printf("%d", ft_isascii('o'));
	printf("%d", ft_isascii(','));
	printf("%d", ft_isascii('>'));
	printf("%d", ft_isascii('@'));
	printf("%d", ft_isascii('/'));
	printf("%d", ft_isascii(129));
	return (0);
}*/
